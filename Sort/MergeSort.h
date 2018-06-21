//
// Created by gary on 18-6-21.
//

#ifndef DATASTRUCT_MERGESORT_H
#define DATASTRUCT_MERGESORT_H

#include <iostream>
using namespace std;

void Merge(int a[], int low, int mid, int high){
    int *b=(int *)malloc(sizeof(int)*(high-low+1));
    int midF=mid;
    int lowF=low;
    int highF=high;
    for (int i = 0; i < highF - lowF + 1; ++i) {
        if (a[low]<a[mid]){
            b[i]=a[low];
            low++;
            if (low==midF){
                for (int j = i+1; j < highF-lowF+1; ++j) {
                    b[j]=a[mid];
                    mid++;
                }
                break;
            }
        } else{
            b[i]=a[mid];
            mid++;
            if (mid==high+1){
                for (int j = i+1; j < highF-lowF+1; ++j) {
                    b[j]=a[low];
                    low++;
                }
                break;
            }
        }
    }
    for (int k = 0; k < highF- lowF+ 1; ++k) {
        a[lowF+ k] = b[k];
    }
}

void MergeSort(int a[],int low,int high){
    if (low<high){
        int mid=(low+high)/2;
        MergeSort(a,low,mid);
        MergeSort(a,mid+1,high);
        Merge(a,low,mid+1,high);
    }
}

#endif //DATASTRUCT_MERGESORT_H
