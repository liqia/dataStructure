#include <iostream>
#include "bitTree.h"
#include "stack.h"
using namespace std;
void preOrder(BitTree *T){
    Astack *stack=(Astack*)malloc(sizeof(Astack));
    initStack(stack);
    while(T||!stackEmpty(*stack)){
        if(NULL==T){
            T=(BitTree*)malloc(sizeof(BitTree));
            pop(stack,T);
        }
        else{
            cout<<T->value<<endl;
            if(T->RbitTree!=NULL)
                push(stack,*(T->RbitTree));
            T=T->LbitTree;
        }
    }
}
