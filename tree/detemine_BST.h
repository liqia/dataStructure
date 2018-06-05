//
// Created by liqi on 18-6-5.
//

#ifndef DATASTRUCT_DETEMINE_BST_H
#define DATASTRUCT_DETEMINE_BST_H

#include "bitTree.h"
#include "stack.h"
using namespace std;

bool IsBST(BitTree *bitTree){
    Astack stack;
    initStack(&stack);
    int min=INT8_MIN;
    while (bitTree!=NULL||!stackEmpty(stack)){
        if (bitTree!=NULL){
            push(&stack,*bitTree);
            bitTree=bitTree->LbitTree;
        } else{
            bitTree=(BitTree*)malloc(sizeof(BitTree));
            pop(&stack,bitTree);
            BitTree *p=bitTree;
            if (bitTree->value<min){
                return false;
            } else{
                min=bitTree->value;
            }
            bitTree=bitTree->RbitTree;
            free(p);
        }
    }
    return true;
}

#endif //DATASTRUCT_DETEMINE_BST_H
