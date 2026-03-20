#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int s, int m, int e){   // tc -> O(n)
    // create temp vector to store in sorted manner
    vector<int> temp;
    int i=s, j=m+1;

    while(i<=m && j<=e){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }


    //if remaining elements in left half
    while(i<=m){
         temp.push_back(arr[i]);
         i++;
    }

    //if remaining elements in right half
    while(j<=e){
        temp.push_back(arr[j]);
        j++;
    }


    // tranfer all sorted element of temp vector to original vector
    for(int idx = 0; idx<temp.size(); idx++){
        arr[idx+s] = temp[idx];
    }

}

void mergeSort(vector<int> &arr, int s, int e){

    if(s<e) {
        int mid = s+(e-s)/2;

        // left half wale ke liye call
        mergeSort(arr, s, mid);

        // right half
        mergeSort(arr, mid+1, e);

        // merge left and right hlaf
        merge(arr, s, mid, e);
    }
}

int main() {
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    int s = 0;
    int e = arr.size()-1;

    mergeSort(arr, s, e);

    for(int val: arr){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}