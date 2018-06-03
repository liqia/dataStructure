//
// Created by liqi on 18-6-3.
//

#ifndef DATASTRUCT_DELETE_X_H
#define DATASTRUCT_DELETE_X_H

#endif //DATASTRUCT_DELETE_X_H

using namespace std;

void Delete(BitTree **bitTree){
    if (*bitTree!=NULL){
        Delete(&((*bitTree)->LbitTree));
        Delete(&((*bitTree)->RbitTree));
        free(*bitTree);
        *bitTree=NULL;
    }
}
void DeleteX(BitTree **bitTree,int x){
    if(*bitTree!=NULL){
        if ((*bitTree)->value==x){
            Delete(bitTree);
            return ;
        }
        DeleteX(&((*bitTree)->LbitTree),x);
        DeleteX(&((*bitTree)->RbitTree),x);
    }
}