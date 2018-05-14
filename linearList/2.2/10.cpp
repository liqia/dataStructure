#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
void leftN(vector<int> &r,int n){
    int *b=new int[n];
    for(int i=0;i<n;i++){
        b[i]=r[i];
    }
    for(int i=n;i<r.size();i++){
        r[i-n]=r[i];
    }
    int j=0;
    for(int i=r.size()-n;i<r.size();i++){
        r[i]=b[j];
        j++;
    }
}
int main(void)
{
    int a[5]={1,2,3,4,5};
    vector<int> r(a,a+5);
    leftN(r,3);
    for(int i=0;i<r.size();i++){
        cout<<r[i]<<endl;
    }
    return 0;
}
