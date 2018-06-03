#include "tree/preOrder_inOrder_creat_tree.h"
#include "tree/LRN.h"
#include "tree/delete_x.h"
#include <iostream>
using namespace std;

/*
       1
      2 3
    x 4 x 5
x x x 6 x x x x
 * */
BitTree productTree(){
    BitTree T;
    T.value=1;
    BitTree *p=(BitTree*)malloc(sizeof(BitTree));
    T.LbitTree=p;
    p->value=2;

    p->LbitTree=NULL;
    p->RbitTree=(BitTree*)malloc(sizeof(BitTree));
    p=p->RbitTree;
    p->value=4;

    p->LbitTree=(BitTree*)malloc(sizeof(BitTree));
    p->RbitTree=NULL;
    p=p->LbitTree;
    p->value=6;

    p->RbitTree=NULL;
    p->LbitTree=NULL;

    T.RbitTree=(BitTree*)malloc(sizeof(BitTree));
    T.RbitTree->value=3;
    p=T.RbitTree;

    p->RbitTree=(BitTree*)malloc(sizeof(BitTree));
    p->LbitTree=NULL;
    p=p->RbitTree;
    p->value=5;

    p->RbitTree=NULL;
    p->LbitTree=NULL;

    return T;
}


int main(){
//    BitTree p=productTree();
    int pre[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int in[]={2,3,1,5,4,7,8,6,9};
    BitTree *p=CreateTree(pre,in,9);
    DeleteX(&p,3);
    postOrder(p);
    return 0;
}
