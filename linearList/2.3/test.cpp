#include <stdio.h>
#include "12.h"
void coutLink(LNode *head){
    while(head->next!=NULL){
        cout<<" "<<head->next->data<<endl;
        head=head->next;
    }
}
int main(){
    LNode *head=(LNode *)malloc(sizeof(LNode));
    head->data=100;
    head->next=NULL;
    LNode *p=head;
    for (int i=6;i>0;i--){
        p->next=(LNode*)malloc(sizeof(LNode));
        p->next->data=i;
        p->next->next=NULL;
        p=p->next;
    }
    LNode *a=(LNode *)malloc(sizeof(LNode));
    LNode *b=(LNode *)malloc(sizeof(LNode));
    head->next->next->data=6;
    deleteSame(head);
    coutLink(head);
    coutLink(b);
    return 0;
}
