
// #include<bits/stdc++.h>
#include<iostream>
#include<limits.h>
using namespace std;

int maxColSum(int arr[][3], int r, int c){
    int sum = INT_MIN;
    for(int j=0; j<c; j++) {
        int currSum = 0;
        for(int i=0; i<r; i++) {
            currSum += arr[i][j];
        }
        sum = max(sum, currSum);
    }

    return sum;
}

int main() {
        int matrix[3][3] = { 
                                {1,2,3},
                                {4,15,6},
                                {7,8,9},

                            };
        int r = 3;
        int c = 3;

        int ans = maxColSum(matrix, r, c);

        cout<<"max Col sum - "<<ans;

    return 0;
}