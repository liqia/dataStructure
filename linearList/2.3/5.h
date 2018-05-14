#include <iostream>
#include "LNode.h"
using namespace std;
/*
 *
 *
 * */
LNode *reverseLink(LNode *head){
	LNode *up=head->next;
	head=head->next;
	while(head->next!=NULL){
		head=head->next->next;
		up->next-next=up;
		up=up->next
	}
}
