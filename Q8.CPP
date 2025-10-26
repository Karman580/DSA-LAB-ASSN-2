#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={1,2,3,2,1,4};
    unordered_set<int>s(a.begin(),a.end());
    cout<<s.size();
}
