#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int s, int e) {
    int index = s-1;
    int pivot = arr[e];

    for(int j=s; j<e; j++){
        if(arr[j] <= pivot) {
            index++;
            swap(arr[j], arr[index]);
        }
    }
    index++;
    swap(arr[index], arr[e]);
    return index;
}

void quickSort(vector<int> &arr, int s, int e){

    if(s<e) {

        // find pivot index
        int pivotIndex = partition(arr, s, e);

        quickSort(arr, s, pivotIndex-1); //left partition
        quickSort(arr, pivotIndex+1, e); //right partition

    }
}

int main() {
    vector<int> arr = {5,2,6,4,1,3};

    quickSort(arr, 0, arr.size()-1);

    for(int val : arr) {
        cout<<val<<" ";
    }
    cout<<endl;
}