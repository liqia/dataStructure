//
// Created by gary on 18-6-18.
//

#ifndef DATASTRUCT_SELECTSORT_H
#define DATASTRUCT_SELECTSORT_H
#include <iostream>
using namespace std;

void SelectSort(int a[],int n){
    for (int i = 0; i < n-1; ++i) {
        int min=i;
        for (int j = i+1; j <n ; ++j) {
            if (a[min]>a[j])
                min=j;
        }
        int tem=a[i];
        a[i]=a[min];
        a[min]=tem;
    }
    for (int k = 0; k < n ; ++k) {
        cout<<a[k]<<endl;
    }
}

#endif //DATASTRUCT_SELECTSORT_H
