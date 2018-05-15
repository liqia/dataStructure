#include <iostream>
#include "LNode.h"
using namespace std;
void printLink(LNode *head){
    int min;
    LNode *minNode;
    while(head->next!=NULL){
        min=head->next->data;
        minNode=head;
        LNode *p=head;
        while(p->next!=NULL){
            if(p->next->data<min){
                minNode=p;
                min=p->next->data;
            }
            p=p->next;
        }
        p=minNode->next;
        cout<<":"<<min<<endl;
        minNode->next=minNode->next->next;
        free(p);
    }
}
