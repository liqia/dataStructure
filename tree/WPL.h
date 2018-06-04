//
// Created by liqi on 18-6-4.
//

#ifndef DATASTRUCT_WPL_H
#define DATASTRUCT_WPL_H

#endif //DATASTRUCT_WPL_H
using namespace std;

int Recursion(BitTree *bitTree, int level){
    if (bitTree->RbitTree == NULL && bitTree->LbitTree == NULL) {
        return level*bitTree->value;
    }
    else if (bitTree->LbitTree!=NULL&&bitTree->RbitTree!=NULL){
        return Recursion(bitTree->RbitTree, 1+level) + Recursion(bitTree->LbitTree, 1+level);
    } else if (bitTree->RbitTree==NULL&&bitTree->LbitTree!=NULL){
        return Recursion(bitTree->LbitTree,1+level);
    } else if (bitTree->RbitTree!=NULL&&bitTree->LbitTree==NULL){
        return Recursion(bitTree->RbitTree,1+level);
    }
}
int WPL(BitTree *tree){
    return tree==NULL?0:Recursion(tree,0);
}
