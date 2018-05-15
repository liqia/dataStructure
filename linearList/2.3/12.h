#include <iostream>
#include "LNode.h"
using namespace std;
void deleteSame(LNode *head){
    LNode *fp;
    while(head->next->next!=NULL){
        if(head->next->data==head->next->next->data){
            fp=head->next;
            head->next=head->next->next;
            free(fp);
        }else{
            head=head->next;
        }
    }
}
