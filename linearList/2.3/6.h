#include <iostream>
#include "LNode.h"
using namespace std;
void sortLink(LNode *head){
    if(head->next->next==NULL){
        return;
    }
    LNode *t=head->next->next;
    head->next->next=NULL;
    while(t!=NULL){
        LNode *p=head;
        LNode *T=t->next;
        while(p->next!=NULL){
            if((t->data)<(p->next->data)){//插入p->next之后 ，并将t和p->next的data值替换
                int temp=t->data;
                t->data=p->next->data;
                p->next->data=temp;
                LNode *tempL=p->next->next;
                p->next->next=t;
                t->next=tempL;
                break;
            }
            if((t->data>=p->next->data)&&p->next->next==NULL){
                p->next->next=t;
                t->next=NULL;
                break;
            }
            p=p->next;
        }
        t=T;
    }
}
