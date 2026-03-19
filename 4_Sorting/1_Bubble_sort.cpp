#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        bool isSwap = false; // check for array is already sorted or not -> littile optimization
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;     // agar ek bhi swap nhi hotta ek baar loop chalne prr iska mtlb arr sorted tha orr return kar jao
        }
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

    bubbleSort(arr, n);
    cout<<"After sort -> ";print(arr,n);
}