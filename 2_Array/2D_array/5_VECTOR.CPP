#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<vector<int>> mat = { 
                                {1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12,12,12},  //store any number of element in every  row
                                {13,14,15,16}

                            };

    // rows => mat.size()
    // col => mat[i].size();

    for(int i=0; i<mat.size(); i++) {
        for(int j=0; j<mat[i].size(); j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}