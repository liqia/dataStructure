//
// Created by gary on 18-6-20.
//

#ifndef DATASTRUCT_MOVE_ODD_FIRST_H
#define DATASTRUCT_MOVE_ODD_FIRST_H

void MoveOddFirst(int a[],int size){
    int low=0,high=size-1;
    while (low<high){
        while (a[low]%2==1&&low<high)
            low++;
        while(a[high]%2==0&&low<high)
            high--;
       int tem =a[low];
       a[low]=a[high];
       a[high]=tem;
    }
}

#endif //DATASTRUCT_MOVE_ODD_FIRST_H
