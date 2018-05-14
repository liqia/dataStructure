#include <iostream>
using namespace std;
struct LNode {
    int data;
    LNode *next;
};
void deleteX(LNode *head,int x){
    if(head->next==NULL)
        return;
    if(head->next->data==x){
        LNode *p=head->next;
        head->next=head->next->next;
        free(p);
    }
    deleteX(head->next,x);
    return;
}
int main(){
    LNode *head=(LNode*)malloc(sizeof(LNode));
    head->data=1;
    head->next=NULL;
    LNode *p=head;
    int i=0;
    while(i<6){
        p->next=(LNode*)malloc(sizeof(LNode));
        p->next->data=i;
        p->next->next=NULL;
        p=p->next;
        i++;
    }
    deleteX(head,555);
    cout<<"--------"<<endl;
    while(head!=NULL){
        cout<<head->data<<endl;
        head=head->next;
    }
}
