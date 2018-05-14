#include <iostream>
using namespace std;
struct LNode{
    int data;
    LNode *next;
};
void DeleteX(LNode **head,int x){
    if((*head)==NULL)
        return;
    if((*head)->data==x){
        LNode *p=*head;
        (*head)=(*head)->next;
        free(p);
    }
    DeleteX(&((*head)->next),x);
    return ;
}
int main(){
    LNode *head=(LNode *)malloc(sizeof(LNode));
    head->data=1;
    head->next=NULL;
    int i=0;
    LNode *p=head;
    while(i<6){
        p->next=(LNode*)malloc(sizeof(LNode));
        p->next->data=i;
        p->next->next=NULL;
        p=p->next;
        i++;
    }
    DeleteX(&head,1);
    if(head==NULL)
        cout<<"jfie"<<endl;
    cout<<"----------"<<endl;
    while(head!=NULL){
        cout<<" "<<(head->data)<<endl;
        head=head->next;
    }
    return 0;
}
