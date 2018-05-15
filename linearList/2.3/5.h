#include <iostream>
#include "LNode.h"
using namespace std;
/*
 *
 *
 * */
LNode *reverseLink(LNode *head){
	LNode *up=head;
	head=head->next;
    up->next=NULL;
    LNode *t=head;
	while(head!=NULL){
        head=head->next;
        t->next=up;
        up=t;
        t=head;
    }
    return up;
}
