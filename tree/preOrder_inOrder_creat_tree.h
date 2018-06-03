//
// Created by liqi on 18-6-3.
//

#ifndef DATASTRUCT_PREORDER_INORDER_CREAT_TREE_H
#define DATASTRUCT_PREORDER_INORDER_CREAT_TREE_H

#endif //DATASTRUCT_PREORDER_INORDER_CREAT_TREE_H

#include "bitTree.h"

using namespace std;
BitTree* CreateTree(int pre[],int in[],int size){
    if(size==0)
        return NULL;
    BitTree* tree =(BitTree *)malloc(sizeof(BitTree));
    tree->value=*pre;

    int size1=0,size2=0;
    for (int i = 0; i < size; ++i) {
        if (*(in+i)==*pre){
            size1=i;
            size2=size-i-1;
        }
    }

    tree->LbitTree=CreateTree(pre+1,in,size1);
    tree->RbitTree=CreateTree(pre+1+size1,in+1+size1,size2);
    return tree;
}
