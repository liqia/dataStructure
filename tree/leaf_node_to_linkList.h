//
// Created by liqi on 18-6-4.
//

#ifndef DATASTRUCT_LEAF_NODE_TO_LINKLIST_H
#define DATASTRUCT_LEAF_NODE_TO_LINKLIST_H

#endif //DATASTRUCT_LEAF_NODE_TO_LINKLIST_H

#include "stack.h"
using namespace std;

void LeafNodeToLinkList(BitTree *head, BitTree *tree){
    Astack astack;
    initStack(&astack);
    BitTree *bitTree=NULL;
    while (tree!=NULL||!stackEmpty(astack)){
        if (tree==NULL){
            tree=(BitTree*)malloc(sizeof(BitTree));
            pop(&astack,tree);
        }
        else{
            if (tree->LbitTree!=NULL)
                push(&astack,*tree->LbitTree);
            bitTree=tree;
            tree=tree->RbitTree;
            if (bitTree->RbitTree==NULL&&bitTree->LbitTree==NULL) {
                bitTree->RbitTree = head->RbitTree;
                head->RbitTree = bitTree;
            }
        }
    }
}
