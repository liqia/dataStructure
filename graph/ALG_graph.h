//
// Created by liqi on 18-6-7.
//
#define MaxVertex 20
#ifndef DATASTRUCT_ALG_GRAPH_H
#define DATASTRUCT_ALG_GRAPH_H

#include <iostream>
using namespace std;

struct ArcNode{
    int vertex;
    ArcNode *next;
};
struct VNode{
    int data;
    ArcNode *first;
};
struct Graph{
    VNode vNodes[MaxVertex];
    int vertexNum;
    int edgeNum;
};

/*
 *  1
 * 2 3
 * 4
 * */
void  CreatGraph(Graph &graph){
    graph.vertexNum=4;
    graph.edgeNum=4;

    //1->2->3
    graph.vNodes[0].data=1;
    ArcNode * arcNode12=(ArcNode*)malloc(sizeof(ArcNode));
    ArcNode * arcNode13=(ArcNode*)malloc(sizeof(ArcNode));
    arcNode12->vertex=2;
    arcNode12->next=arcNode13;
    arcNode13->vertex=3;
    arcNode13->next=NULL;
    graph.vNodes[0].first=arcNode12;

    //2->3->4->1
    graph.vNodes[1].data=2;
    ArcNode arcNode23,arcNode24,arcNode21;
    arcNode23.vertex=3;
    arcNode23.next=&arcNode24;
    arcNode24.vertex=4;
    arcNode24.next=&arcNode21;
    arcNode21.vertex=1;
    arcNode21.next=NULL;
    graph.vNodes[1].first=&arcNode23;

    //3->1->2
    graph.vNodes[2].data=3;
    ArcNode arcNode31,arcNode32;
    arcNode31.vertex=1;
    arcNode32.vertex=2;
    arcNode31.next=&arcNode32;
    arcNode32.next=NULL;
    graph.vNodes[2].first=&arcNode31;

    //4->2
    graph.vNodes[3].data=4;
    ArcNode arcNode42;
    arcNode42.vertex=2;
    arcNode42.next=NULL;
    graph.vNodes[2].first=&arcNode42;

}


//basic operation

int FirstNeighbor(Graph &graph,int data){
    for (int i = 0; i < graph.vertexNum; ++i) {
        if(graph.vNodes[i].data==data){
            return graph.vNodes[i].first->vertex;
        }
    }
    return -1;
}

int NextNeighbor(Graph &graph,int data,int pre){
    for (int i = 0; i < graph.vertexNum; ++i) {
        if(graph.vNodes[i].data==data){
            ArcNode *p=graph.vNodes[i].first;
            while (p) {
                if (p->vertex==pre&&p->next!=NULL)
                    return p->next->vertex;
                p=p->next;
            }
        }
    }
    return -1;

}

#endif //DATASTRUCT_ALG_GRAPH_H
