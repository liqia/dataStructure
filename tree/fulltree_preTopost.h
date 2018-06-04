//
// Created by liqi on 18-6-4.
//

#ifndef DATASTRUCT_FULLTREE_PRETOPOST_H
#define DATASTRUCT_FULLTREE_PRETOPOST_H

#endif //DATASTRUCT_FULLTREE_PRETOPOST_H

using namespace std;

void PreToPost(BitTree *fullTree,int pre[],int size){
    if (fullTree != NULL) {
        PreToPost(fullTree->LbitTree, pre + 1, (size + 1) / 2);
        PreToPost(fullTree->RbitTree, pre + (size + 1) / 2 + 1, (size + 1) / 2);
        cout<<fullTree->value<<endl;
    }
}
