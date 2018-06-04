//
// Created by liqi on 18-6-4.
//

#ifndef DATASTRUCT_LRN2_H
#define DATASTRUCT_LRN2_H

#endif //DATASTRUCT_LRN2_H

#include "stack.h"
using namespace std;

void LRN(BitTree *bitTree){
    Astack stack;
    initStack(&stack);
    BitTree *r=NULL;
    while (bitTree||!stackEmpty(stack)){
        if (bitTree!=NULL) {
            push(&stack,*bitTree);
            bitTree=bitTree->LbitTree;
        } else{
            bitTree = (BitTree *) malloc(sizeof(BitTree));
            getTop(stack,bitTree);
            if (bitTree->RbitTree!=NULL&&bitTree->RbitTree!=r){//bitTree->RbitTree永远都不可能等于r(因为r是malloc得到的，所以不可能相同)，所以这样写是错误的，堆栈里面应该放指针才比较容易处理
                BitTree* x=bitTree;
                bitTree=bitTree->RbitTree;
                free(x);
                push(&stack,*bitTree);
                bitTree=bitTree->LbitTree;
            } else{
                pop(&stack,bitTree);
                cout<<bitTree->value<<endl;
                free(r);
                r=bitTree;
                bitTree=NULL;
            }
        }
    }
}
