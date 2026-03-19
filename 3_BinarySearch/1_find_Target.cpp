#include<iostream>
#include<vector>
using namespace std;

// using recursion

int recursionBinarySearch(vector<int> arr, int tar, int start, int end) {
    if(start <= end) {
        int mid = start + (end-start)/2;

        if(tar > arr[mid]){
            return recursionBinarySearch(arr, tar, mid+1, end);
        }
        else if(tar < arr[mid]){
            return recursionBinarySearch(arr, tar, start, mid-1);
        }
        else{
            return mid;
        }
    }

    return -1;
}


// iterrative approach
int binarySearch(vector<int> arr, int target) {
    int s = 0;
    int e = arr.size()-1;
    

    while(s<=e) {
    //    int mid = (s+e)/2;
          int mid = s + (e-s)/2; // int overflow

        if(arr[mid] == target){
            return mid;
        }
        else if(target > arr[mid]) {
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
}

int main(){

    vector<int>arr1 = {-1, 0, 3, 4, 5, 9, 12}; //odd
    int tar1 = 12;

    int ans1 = binarySearch(arr1, tar1);
    cout<<"target found in arr1 at index -> "<<ans1<<endl;
    
    vector<int>arr2 = {-1, 0, 3, 5, 9, 12}; //even
    int tar2 = 0;
    
    int ans2 = binarySearch(arr2, tar2);
    cout<<"target found in arr2 at index -> "<<ans2<<endl;


    // using recursion
    int ans3 = recursionBinarySearch(arr2, tar2, 0, arr2.size()-1 );
    cout<<"target found in arr2 at index using recursion -> "<<ans3<<endl;


    

    return 0;
}