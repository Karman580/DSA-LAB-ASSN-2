#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    int size=n*(n+1)/2;
    int lower[size];
    for(int i=0;i<size;i++) lower[i]=i+1;
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j) cout<<lower[k++]<<" ";
            else cout<<0<<" ";
        }
        cout<<"\n";
    }
}
