#include <bits/stdc++.h>
using namespace std;
int missingNumber(int arr[],int n){
    int l=0,r=n-2;
    while(l<=r){
        int m=(l+r)/2;
        if(arr[m]==m+1) l=m+1;
        else r=m-1;
    }
    return l+1;
}
int main(){
    int arr[]={1,2,3,5,6};
    int n=6;
    cout<<missingNumber(arr,n);
}
