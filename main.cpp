#include "tree/preOrder_inOrder_creat_tree.h"
#include "tree/fulltree_preTopost.h"
#include "tree/WPL.h"
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
    BitTree a=productTree();
    int pre[] = {1,2,4,5,3,6,7};
    int in[]={4,2,5,1,6,3,7};
    BitTree *p=CreateTree(pre,in,7);
    cout<<WPL(&a)<<endl;
    return 0;
}
