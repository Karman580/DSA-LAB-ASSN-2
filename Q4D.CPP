#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> arr={"banana","apple","cherry"};
    sort(arr.begin(),arr.end());
    for(auto &s:arr) cout<<s<<" ";
}
