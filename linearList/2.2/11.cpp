#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int findMiddle(vector<int> &a,vector<int> &b){
    int flag=0;
    int i,j=0;
    int t=0;
    while(1){
        if(a[i]<b[j]){
            t=a[i];
            i++;
            flag++;
        }else{
            t=b[j];
            j++;
            flag++;
        }
        if(flag==a.size())
            return t;
    }
}
int main(void)
{
    int a[5]={1,3,5,7,9};
    int b[5]={2,4,6,8,10};
    vector<int> aa(a,a+5);
    vector<int> bb(b,b+5);
    cout<<findMiddle(aa,bb)<<endl;
    return 0;
}
