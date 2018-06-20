//
// Created by gary on 18-6-20.
//

#ifndef DATASTRUCT_TWO_WAY_BUBBLE_SORT_H
#define DATASTRUCT_TWO_WAY_BUBBLE_SORT_H

#include <iostream>
using namespace std;

void Two_wayBubbleSort(int a[] ,int size){
    int flag2,flag1;
    for (int i = 0; i <size; ++i) {
        int tem;
         if (i%2==0){
             flag1=0;
             for (int j = i/2; j <size-i/2-1 ; ++j) {
                 if (a[j]>a[j+1]){
                     tem =a[j];
                     a[j]=a[j+1];
                     a[j+1]=tem;
                     flag1=1;
                 }
             }
             if (flag1==0)
                 break;
         } else{
             flag2=0;
             for (int j = size-(i+1)/2-1; j >i/2; j--) {
                 if (a[j]<a[j-1]){
                     tem=a[j];
                     a[j]=a[j-1];
                     a[j-1]=tem;
                     flag2=1;
                 }
             }
             if (flag2==0)
                     break;
         }
    }
}

#endif //DATASTRUCT_TWO_WAY_BUBBLE_SORT_H
