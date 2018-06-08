//
// Created by liqi on 18-6-8.
//

#ifndef DATASTRUCT_BFS_H
#define DATASTRUCT_BFS_H

#include "ALG_graph.h"
#include "queue.h"
using namespace std;

void BFS(Graph &graph,int firstVertex){
    int *visited=(int*)malloc(sizeof(int)*(graph.vertexNum+1));
    for (int i = 0; i < graph.vertexNum + 1; ++i) {
        *(visited+i)=0;
    }
    Queue queue;
    initQueue(queue);
    EnQueue(queue,firstVertex);
    *(visited+firstVertex)=1;
    int visit;
    while (!QueueEmpty(queue)){
        DeQueue(queue,visit);
        cout<<visit<<endl;
        for (int node=FirstNeighbor(graph,visit);node>0;node=NextNeighbor(graph,visit,node)){
            if (visited[node]!=1){
                EnQueue(queue,node);
                *(visited+node)=1;
            }
        }
    }
}

#endif //DATASTRUCT_BFS_H
