
// #include<bits/stdc++.h>
#include<iostream>
#include<limits.h>
using namespace std;

int diagonalSum(int arr[][4], int n){   // O(n^2)
    int sum = 0;
    for(int i=0; i<n; i++) {
        
        for(int j=0; j<n; j++) {

            // primary diagonal
            if(i == j) {
                sum += arr[i][j];
            }
            // secondary diagonal
            else if( j == n-i-1){
                sum += arr[i][j];
            }

        }
    }

    return sum;
}

int opti(int arr[][4], int n){   // O(n)
    int sum = 0;
    for(int i=0; i<n; i++) {
            sum += arr[i][i];   //primary diagonal
            
            if(i != n-i-1){
                sum += arr[i][n-i-1];   //secondary diagonal
            }

        }
        return sum;
    }


int main() {
        int matrix[4][4] = { 
                                {1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12},
                                {13,14,15,16}

                            };
        int n = 4;

        int ans = diagonalSum(matrix, n);

        cout<<"Diagonal sum - "<<ans<<endl;

        cout<<"optimise -> "<<opti(matrix,n)<<endl;

    return 0;
}