//
// Created by gary on 18-6-18.
//

#ifndef DATASTRUCT_BUBBLESORT_H
#define DATASTRUCT_BUBBLESORT_H

#include <iostream>
using namespace std;

void BubbleSort(int a[],int size){
    for (int i = 0; i < size - 1; ++i) {
        int flag=0;
        for (int j = 0; j <size-i-1 ; ++j) {
            if (a[j]>a[j+1]){
                int tem =a[j];
                a[j]=a[j+1];
                a[j+1]=tem;
                flag=1;
            }
        }
        if (flag==0)
            break;
    }

    for (int k = 0; k < size; ++k) {
        cout<<a[k]<<endl;
    }
}

#endif //DATASTRUCT_BUBBLESORT_H
