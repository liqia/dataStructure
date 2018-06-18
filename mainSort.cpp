//
// Created by gary on 18-6-18.
//
#include "Sort/BubbleSort.h"
#include "Sort/QuickSort.h"

int main (){
    int a[] = {6, 5, 2, 1, 3, 4};
    QuickSort(a,0,5);
    for (int i = 0; i < 6; ++i) {
        cout<<a[i]<<endl;
    }
    return 0;
}
