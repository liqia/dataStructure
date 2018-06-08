//
// Created by liqi on 18-6-8.
//
#include "graph/ALG_graph.h"
#include "graph/BFS.h"
int main(){
    Graph graph;
    CreatGraph(graph);
    BFS(graph,1);
    cout<<NextNeighbor(graph,3,2)<<endl;
    cout<<FirstNeighbor(graph,4)<<endl;
}
