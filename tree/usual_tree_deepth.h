//
// Created by liqi on 18-6-5.
//

#ifndef DATASTRUCT_USUAL_TREE_DEEPTH_H
#define DATASTRUCT_USUAL_TREE_DEEPTH_H

#endif //DATASTRUCT_USUAL_TREE_DEEPTH_H

using namespace std;
void ReDeepth(BitTree *tree, int leval,int &deepth){
    if (tree != NULL) {
        leval++;
        if (leval>deepth)
            deepth=leval;
        while (tree != NULL) {
            ReDeepth(tree->LbitTree,leval,deepth);
            tree=tree->RbitTree;
        }
    }
}
int TreeDeepth(BitTree *bitTree){
    int deepth=0;
    ReDeepth(bitTree,0,deepth);
    return deepth;
}
