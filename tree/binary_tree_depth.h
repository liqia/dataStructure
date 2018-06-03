//
// Created by liqi on 18-6-3.
//

#ifndef DATASTRUCT_BINARY_TREE_DEPTH_H
#define DATASTRUCT_BINARY_TREE_DEPTH_H

#endif //DATASTRUCT_BINARY_TREE_DEPTH_H

#include "bitTree.h"

using namespace std;
int depth=0;
void Recurtion(BitTree *tree, int level){
    if (NULL != tree) {
        level++;
        if(level>depth){
            depth=level;
        }
        Recurtion(tree->LbitTree,level);
        Recurtion(tree->RbitTree,level);
    }
}
int BinaryTreeDepth(BitTree bitTree){
    Recurtion(&bitTree, 0);
    return depth;
}

