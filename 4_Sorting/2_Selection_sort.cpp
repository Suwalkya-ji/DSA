#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int smallestIndex = i; //assume 1st index is smallest
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j;  //find smallest index and replace 
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }
}

void print(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i] <<" ";
    }
}

int main() {
    int arr[] = {4,2,5,1,3};
    int n = 5;

    cout<<"Before sort -> ";
    print(arr,n);
    
    cout<<endl;

    SelectionSort(arr, n);
    cout<<"After sort -> ";
    print(arr,n);
}