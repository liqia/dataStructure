//
// Created by gary on 18-6-20.
//

#ifndef DATASTRUCT_FIND_KTH_H
#define DATASTRUCT_FIND_KTH_H

#include <iostream>
using namespace std;

int FindK(int a[],int size, int k){
    int low=0,high=size-1;
    while(1){
        int low1=low,high1=high;
        int select=a[low];
        while (low < high) {
            while (a[high]>select&&low<high)
                high--;
            a[low]=a[high];
            while (a[low]<select&&low<high)
                low++;
            a[high]=a[low];
        }
        a[low]=select;
        if (low==k)
            break;
        else if(low<k){
            high=high1;
            low++;
        } else if (low>k){
            high=low-1;
            low=low1;
        }
    }
    return low;
}

#endif //DATASTRUCT_FIND_KTH_H
