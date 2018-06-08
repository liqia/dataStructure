//
// Created by liqi on 18-6-8.
//

#ifndef DATASTRUCT_DFS_H
#define DATASTRUCT_DFS_H

#include <iostream>
#include "ALG_graph.h"
using namespace std;

void DFS_Recursion(Graph &graph, int firstVertex, int* visited){
    cout<<firstVertex<<endl;
    for (int node = FirstNeighbor(graph, firstVertex); node > 0; node = NextNeighbor(graph, firstVertex, node)) {
        if (*(visited+node)==0){
            *(visited+node)=1;
            DFS_Recursion(graph,node,visited);
        }
    }
}
void DFS(Graph &graph,int firstVertex){
    int *visited=(int*)malloc(sizeof(int)*(graph.vertexNum+1));
    for (int i = 0; i < graph.vertexNum + 1; ++i) {
        *(visited+i)=0;
    }
    for (int j = 1; j < graph.vertexNum + 1; ++j) {
        if (*(visited+j)==0){
            *(visited+j)=1;
            DFS_Recursion(graph,j,visited);
        }
    }
}

#endif //DATASTRUCT_DFS_H
