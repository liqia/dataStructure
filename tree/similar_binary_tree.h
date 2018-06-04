//
// Created by liqi on 18-6-4.
//

#ifndef DATASTRUCT_SIMILAR_BINARY_TREE_H
#define DATASTRUCT_SIMILAR_BINARY_TREE_H

#endif //DATASTRUCT_SIMILAR_BINARY_TREE_H

using namespace std;

bool isSimilar(BitTree *tree1,BitTree *tree2){
    if (tree1==NULL&&tree2==NULL){
        return true;
    }
    if ((tree1 == NULL && tree2 != NULL) || (tree1 != NULL && tree2 == NULL)) {
        return false;
    }
    return isSimilar(tree1->LbitTree,tree2->LbitTree)&&isSimilar(tree1->RbitTree,tree2->RbitTree);

}
