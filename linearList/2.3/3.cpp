#include <iostream>
#include "LNode.h"
using namespace std;
void outLink(LNode *head){
    if(head->next->next==NULL)
    {
        cout<<" "<<head->next->data<<endl;
        return;
    }
    outLink(head->next);
    cout<<" "<<head->next->data<<endl;
}
int main(){
    LNode *head=(LNode *)malloc(sizeof(LNode));
    head->data=100;
    head->next=NULL;
    LNode *p=head;
    for (int i=0;i<6;i++){
        p->next=(LNode*)malloc(sizeof(LNode));
        p->next->data=i;
        p->next->next=NULL;
        p=p->next;
    }
    outLink(head);
    retur 0;
}
