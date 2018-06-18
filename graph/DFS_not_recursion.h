//
// Created by liqi on 18-6-8.
//

#ifndef DATASTRUCT_DFS_NOT_RECURSION_H
#define DATASTRUCT_DFS_NOT_RECURSION_H

#include "stack.h"
#include "ALG_graph.h"
using namespace std;

void DFS(Graph &graph,int firstVertex) {
    Stack stack;
    InitStack(stack);
    int * visited=(int*)malloc(sizeof(int)*(graph.vertexNum+1));
    int * inStack=(int*)malloc(sizeof(int)*(graph.vertexNum+1));//remember if the vertex is in stack
    for (int i = 0; i < graph.vertexNum; ++i) {
        visited[i]=0; inStack[i]=0;
    }
    Push(stack,firstVertex);
    inStack[firstVertex]=1;
    while(!StackEmpty(stack)){
        int pre;
        Pop(stack,pre);
        visited[pre]=1;
        cout<<pre<<endl;
        for(int i=FirstNeighbor(graph,pre);i>=0;i=NextNeighbor(graph,pre,i)){
            if (visited[i]==0&&0==inStack[i]){
                Push(stack,i);
                inStack[i]=1;
            }
        }
    }
    free(visited);
    free(inStack);
}

#endif
