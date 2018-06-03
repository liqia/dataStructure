//
// Created by liqi on 18-6-3.
//

#ifndef DATASTRUCT_QUEUE_H
#define DATASTRUCT_QUEUE_H

#endif //DATASTRUCT_QUEUE_H

#include <iostream>
#include "bitTree.h"

using namespace std;

struct Queue{
    int front,rear;
    BitTree data[100];
};

void initQueue(Queue &queue){
    queue.front=queue.rear=0;
}

bool isEmpty(Queue &queue){
    return queue.rear == queue.front;
}

bool EnQueue(Queue &queue,BitTree t){
    if ((queue.rear + 1) % 100 == queue.front) {
        return false;
    }
    queue.data[queue.rear]=t;
    queue.rear=(queue.rear+1)%100;
    return true;
}

bool DeQueue(Queue &queue,BitTree &x){
    if (queue.rear==queue.front)
        return false;
    x=queue.data[queue.front];
    queue.front=(queue.front+1)%100;
    return true;
}
