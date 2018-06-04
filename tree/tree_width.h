//
// Created by liqi on 18-6-4.
//

#ifndef DATASTRUCT_TREE_WIDTH_H
#define DATASTRUCT_TREE_WIDTH_H

#endif //DATASTRUCT_TREE_WIDTH_H

#include "queue.h"
using namespace std;

int TreeWidth(BitTree t){
    Queue queue;
    initQueue(queue);
    BitTree last,preLast;//preLast表示上一层的最后一个节点，last用来遍历得到本层的最后一个节点。
    EnQueue(queue,t);
    preLast=t;
    int width=0;
    int p=0;
    while (!isEmpty(queue)) {
        BitTree pTree;
        DeQueue(queue,pTree);
        p++;
        if (pTree.LbitTree!=NULL)
        {
            EnQueue(queue,*pTree.LbitTree);
            last=*pTree.LbitTree;
        }
        if(pTree.RbitTree!=NULL)
        {
            EnQueue(queue, *pTree.RbitTree);
            last=*pTree.RbitTree;
        }

        //如果以下条件成立，则表示新的一层开始
        if(pTree.value==preLast.value&&pTree.RbitTree==preLast.RbitTree&&pTree.LbitTree==preLast.LbitTree){
            preLast=last;
            if (p>width)
                width=p;
            p=0;
        }
    }
    return width;
}
