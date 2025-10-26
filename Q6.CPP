#include <bits/stdc++.h>
using namespace std;

struct Triplet {
    int row, col, val;
};

void print(vector<Triplet>& t) {
    for (auto &x : t) cout << x.row << " " << x.col << " " << x.val << "\n";
}

vector<Triplet> transpose(vector<Triplet>& a) {
    vector<Triplet> res;
    res.push_back({a[0].col, a[0].row, a[0].val});
    for (int i = 1; i < a.size(); i++) res.push_back({a[i].col, a[i].row, a[i].val});
    return res;
}

vector<Triplet> add(vector<Triplet>& a, vector<Triplet>& b) {
    vector<Triplet> res;
    res.push_back({a[0].row, a[0].col, a[0].val});
    int i=1,j=1;
    while(i<a.size() && j<b.size()){
        if(a[i].row==b[j].row && a[i].col==b[j].col){
            res.push_back({a[i].row,a[i].col,a[i].val+b[j].val});
            i++; j++;
        } else if(a[i].row<b[j].row || (a[i].row==b[j].row && a[i].col<b[j].col))
            res.push_back(a[i++]);
        else res.push_back(b[j++]);
    }
    while(i<a.size()) res.push_back(a[i++]);
    while(j<b.size()) res.push_back(b[j++]);
    return res;
}

vector<Triplet> multiply(vector<Triplet>& a, vector<Triplet>& b) {
    vector<Triplet> res;
    res.push_back({a[0].row,b[0].col,a[0].val});
    for (int i=1;i<a.size();i++){
        for (int j=1;j<b.size();j++){
            if(a[i].col==b[j].row)
                res.push_back({a[i].row,b[j].col,a[i].val*b[j].val});
        }
    }
    return res;
}

int main(){
    vector<Triplet> A={{3,3,0},{0,0,1},{0,2,2},{1,1,3}};
    vector<Triplet> B={{3,3,0},{0,0,4},{0,2,5},{1,1,6}};
    auto T=transpose(A);
    auto C=add(A,B);
    auto M=multiply(A,B);
    cout<<"Transpose:\n"; print(T);
    cout<<"Addition:\n"; print(C);
    cout<<"Multiplication:\n"; print(M);
}
