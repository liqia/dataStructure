//
// Created by gary on 18-6-21.
//

#ifndef DATASTRUCT_HEADSORT_H
#define DATASTRUCT_HEADSORT_H

#include <iostream>
using namespace std;

void AdjustDown(int a[],int size,int point){
    int x=a[point];
    int i;
    for (i = point*2; i <size ;i=i*2) {
        if (i < size && a[i] < a[i + 1]) {
            i++;
        }
        if (x>=a[i])
            break;
        else
            a[i/2]=a[i];
    }
    a[i/2]=x;
}

void BuildMaxHead(int a[],int size){
    for (int i = size/2; i>=0 ; --i) {
        AdjustDown(a,size,i);
    }
}

void HeapSort(int a[],int size){
    BuildMaxHead(a,size);
    while(size){
        cout<<a[0]<<endl;
        a[0]=a[size-1];
        size--;
        AdjustDown(a,size,0);
    }
}

#endif //DATASTRUCT_HEADSORT_H
