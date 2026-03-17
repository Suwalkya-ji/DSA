#include<iostream>
using namespace std;

int findSum (int arr[], int n) {
    int sum = 0;

    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

int findProduct (int arr[], int n) {
    int product = 1;

    for(int i=0; i<n; i++) {
        product *= arr[i];
    }
    return product;
}

int main () {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);

    int sum = findSum(arr, size);
    int product = findProduct(arr, size);

    cout<<"Sum of Array -> "<<sum<<endl;
    cout<<"Product of Array -> "<<product<<endl;

}