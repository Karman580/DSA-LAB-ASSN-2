#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={2,4,1,3,5};
    int n=a.size();
    int inv=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) inv++;
        }
    }
    cout<<inv;
}
// also merge sort 