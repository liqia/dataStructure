#include <iostream>
using namespace std;
struct Queue{
    int a[10];
    int tag;
    int front,rear;
};
void initQueue(Queue *Q){
    *Q.front=0;
    *Q.rear=0;
    *Q.tag=0;
}
bool emptyQueue(Queue *Q){
    if(Q->tag==0&&(Q->front==Q->rear))
        return 1;
    else return 0;
}
bool enQueue(Queue *q,int x){
    if(q->tag==1&&(q->front==q->rear))
        return 0;
    q->a[q->rear]=x;
    q->rear=(q->rear+1)%10;
    if(q->rear==q->front)
        q->tag=1;
    return 1;
}
bool deQueue(Queue *q,int *x){
    if(q->tag==0&&(q->front==q->rear))
        return 0;
    *x=q->a[q->front];
    q->front=(q->front+1)%10;
    if(q->rear==q->front)
        q->tag=0;
    return 1;
}
