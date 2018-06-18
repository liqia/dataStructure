//
// Created by gary on 18-6-18.
//

#ifndef DATASTRUCT_QUICKSORT_H
#define DATASTRUCT_QUICKSORT_H

#include <iostream>
using namespace std;
int divide(int *a, int start, int end){
    int x=a[start];
    while (start < end) {
         while(a[end]>=x&&start<end)
            end--;
        a[start]=a[end];
        while(a[start]<=x&&start<end)
            start++;
        a[end]=a[start];
    }
    a[start]=x;
    return start;
}

void QuickSort(int *a,int start,int end){
    if (start<end){
        int x=divide(a,start,end);
        QuickSort(a,start,x-1);
        QuickSort(a,x+1,end);
    }
}

#endif //DATASTRUCT_QUICKSORT_H
