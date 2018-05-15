#include <iostream>
#include "LNode.h"
using namespace std;
void deleteA_To_B(LNode *head,int a,int b){
    while (head->next!=NULL){
        if((head->next->data>a)&&(head->next->data<b)){
            cout<<head->next->data<<endl;
            head->next=head->next->next;
            continue;
        }
        head=head->next;
    }
}
