#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for(int i=0; i<n; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main () {
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;
    int target = 8;

   int index =  linearSearch(arr, size, target);

    cout<<"index -> "<<index;


    return 0;
}