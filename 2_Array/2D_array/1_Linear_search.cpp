#include<bits/stdc++.h>
using namespace std;


// return pair of index for target value
pair <int,int> linear(int arr[][3], int r, int c, int key) {

    pair<int,int> p1{-1,-1};

    cout<<"pair in start "<<p1.first<<", "<<p1.second<<endl;
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(arr[i][j] == key) {
                p1.first = i;
                p1.second = j;
                cout<<"pair in mid "<<p1.first<<", "<<p1.second<<endl;
            }
        }
    }
    return p1;
}

bool linearSearch(int arr[][3], int r, int c, int key) {
      for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(arr[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[3][3] = {  
                        {1,2,3},
                        {4,5,6},
                        {7,8,9}                    
                    };

    

    int r = 3;
    int c = 3;

    cout<<linearSearch(arr, r, c, 7);
    cout<<endl;

    pair<int,int>  ans =  linear(arr, r, c, 71);

    cout<<"i - "<<ans.first<<", ";
    cout<<"j - "<<ans.second;

    return 0;
}