//
// Created by liqi on 18-6-3.
//

#ifndef DATASTRUCT_LEVELORDER_H
#define DATASTRUCT_LEVELORDER_H

#endif //DATASTRUCT_LEVELORDER_H

#include "queue.h"
#include "stack.h"
#include <iostream>

using namespace std;

void levelOrder(BitTree *bitTree){
    Queue queue;
    initQueue(queue);
    EnQueue(queue,*bitTree);
    Astack stack;
    initStack(&stack);
    BitTree p;
    while(!isEmpty(queue)){
        DeQueue(queue,p);
        if(p.LbitTree)
            EnQueue(queue,*p.LbitTree);
        if(p.RbitTree)
            EnQueue(queue,*p.RbitTree);
        push(&stack,p);
    }
    while (!stackEmpty(stack)) {
        pop(&stack,&p);
        cout<<p.value<<endl;
    }
}
