#include<iostream>
using namespace std;

int main() {
    int matrix[4][3] = {
                            {1,2,3},
                            {4,5,6},
                            {7,8,9},
                            {10,11,12}
                        };

    int rows = 4;
    int cols = 3;

    cout<<"access single element using index: "<< matrix[2][1]<<endl;


    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int arr2[2][3];
    int row2 = 2;
    int col2 = 3;

    cout<<"enter values ";

    for(int i=0; i<row2; i++) {
        for(int j=0; j<col2; j++) {
            cin>>arr2[i][j];
        }
    }

    cout<<"print arr:- "<<endl;

    for(int i=0; i<row2; i++) {
        for(int j=0; j<col2; j++) {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }








    return 0;
}