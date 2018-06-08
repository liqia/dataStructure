//
// Created by liqi on 18-6-8.
//

#ifndef DATASTRUCT_DFS_NOT_RECURSION_H
#define DATASTRUCT_DFS_NOT_RECURSION_H

#include "stack.h"
#include "ALG_graph.h"
using namespace std;

void DFS(Graph &graph,int firstVertex){
    int *visited=(int*)malloc(sizeof(int)*(graph.vertexNum+1));
    for (int i = 0; i < graph.vertexNum + 1; ++i) {
        *(visited+i)=0;
    }
    Stack stack;
    InitStack(stack);
    int visit=firstVertex;
    while(visit>0||!StackEmpty(stack)){
        *(visited+visit)=1;
        cout<<visit<<endl;
        int first = FirstNeighbor(graph, visit);
        if (first<0){
            Pop(stack,visit);
            while (*(visited+visit)==1&&!StackEmpty(stack)){//when the vertex is visited,find next vertex unless the stack is empty
                Pop(stack, visit);
            }
            if (*(visited+visit)==1)//it means that we pop the all stack and still not find the vertex that is not visited
                break;
        } else{
            int flag=0;//the number of neighbors that isn't visited
            int next=-1;//next vertex that will be visited
            for(int i=first;i>0;i=NextNeighbor(graph,visit,i)){
                if (*(visited+i)==0)
                {
                    flag++;
                    if(flag==1){
                        next=i;
                    } else{
                        Push(stack,i);
                    }
                }
            }
            if (next==-1){//when it can't find the next vertex
                Pop(stack,visit);
                while (*(visited+visit)==1&&!StackEmpty(stack)){
                    Pop(stack, visit);
                }
                if (*(visited+visit)==1)
                    break;
            } else{//when it find the next vertex
                visit=next;
            }
        }
    }
    free(visited);
}

#endif //DATASTRUCT_DFS_NOT_RECURSION_H
