#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int x){
    int l=0,r=n-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(arr[m]==x) return m;
        else if(arr[m]<x) l=m+1;
        else r=m-1;
    }
    return -1;
}
int main(){
    int arr[]={2,3,4,10,40};
    int n=5,x=10;
    cout<<binarySearch(arr,n,x);
}
