#include <iostream>
#include "LNode.h"
using namespace std;
void divideLink(LNode *head,LNode *a,LNode *b){
    int flag=0;
    while(head->next!=NULL){
        if(flag==0){
            a->next=head->next;
            a=a->next;
            flag=1;
        }else{
            b->next=head->next;
            b=b->next;
            flag=0;
        }
        head=head->next;
    }
    a->next=NULL;
    b->next=NULL;
}
