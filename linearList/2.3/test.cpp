#include <stdio.h>
#include "4.h"
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
    deleteMin(head);
    while(head->next!=NULL){
        cout<<" "<<head->next->data<<endl;
        head=head->next;
    }
    return 0;
}
