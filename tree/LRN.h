#include <iostream>
//#include "bitTree.h"
#include "stack.h"
using namespace std;
void postOrder (BitTree *T){
    Astack *stack=(Astack*) malloc(sizeof(Astack));
    Astack *outstack=(Astack*) malloc(sizeof(Astack));
    initStack(stack);
    initStack(outstack);
    while(T||!stackEmpty(*stack)){
        if(NULL==T){
            T=(BitTree*)malloc(sizeof(BitTree));
            pop(stack,T);
        }
        else{
            if(T->LbitTree!=NULL)
            {
                push(stack,*T->LbitTree);
            }
            push(outstack,*T);
            T=T->RbitTree;
        }
    }
    BitTree p;
    while(!stackEmpty(*outstack)){
        pop(outstack,&p);
        cout<<p.value<<endl;
    }
}
