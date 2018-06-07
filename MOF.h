//
// Created by liqi on 18-6-7.
//

#ifndef DATASTRUCT_MOF_H
#define DATASTRUCT_MOF_H

#include <iostream>
using namespace std;

int MF(int e,int r){
    int i=1;
    while (1){
        if (((e*i)%r)==1)
            return i;
        i++;
    }
}

//加密消息
int Encode(int N, int e,int n){
    return (n^e)%N;
}

#endif //DATASTRUCT_MOF_H
