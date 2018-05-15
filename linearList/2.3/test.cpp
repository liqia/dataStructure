#include <stdio.h>
#include "6.h"
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
    sortLink(head);
    while(head->next!=NULL){
        cout<<" "<<head->next->data<<endl;
        head=head->next;
    }
    return 0;
}
