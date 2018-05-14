#include <iostream>
#include "LNode.h"
using namespace std;
void deleteMin(LNode *head){
    LNode *p=head;
    int t=p->next->data;
    while(head->next!=NULL){
        if(t>head->next->data){
            cout<<"bbabb"<<p->next->data<<endl;
            p=head;
            t=head->next->data;
        }
        head=head->next;
    }
    head=p->next;
    cout<<"bbbbb"<<head->next->data<<endl;
    p->next=p->next->next;
    free(head);
}
