//
// Created by liqi on 18-6-7.
//

#ifndef DATASTRUCT_QUEUE_H
#define DATASTRUCT_QUEUE_H

#include <iostream>
using  namespace std;

struct Node{
    int value;
    Node *next;
};
struct Queue{
    Node *front;
    Node *rear;
};

void initQueue(Queue &queue){
    queue.rear=queue.front=NULL;
}

bool EnQueue(Queue &queue, int value){
    Node *node=(Node *)malloc(sizeof(Node));
    node->next=NULL;
    node->value=value;
    if (queue.front == NULL) {
       queue.front=node;
       queue.rear=node;
    } else{
        queue.rear->next=node;
        queue.rear=queue.rear->next;
    }
    return true;
}

bool DeQueue(Queue &queue, int &value){
    if (queue.front==queue.rear){
        value=queue.front->value;
        free(queue.front);
        queue.front=queue.rear=NULL;
    } else if (queue.front==NULL){
        return false;
    }
    else{
        value=queue.front->value;
        Node *node=queue.front;
        queue.front=queue.front->next;
        free(node);
    }
    return true;
}

bool QueueEmpty(Queue &queue){
    return queue.front == NULL;
}

bool GetHead(Queue &queue,int &value){
    if (queue.front==NULL)
        return false;
    value=queue.front->value;
    return true;
}

#endif //DATASTRUCT_QUEUE_H
