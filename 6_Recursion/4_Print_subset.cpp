#include<iostream>
#include<vector>

using namespace std;

void printSubset(vector<int> &arr, vector<int> &ans, int i){
    // base case 
    if(i == arr.size()){
        // print ans and return
        for(int val : ans){
            cout<< val <<" ";
        }
        cout<<endl;
        return;
    }

    // element include 
    ans.push_back(arr[i]);
    printSubset(arr, ans, i+1);

    // backtrack
    ans.pop_back();

    // exclude
    printSubset(arr, ans, i+1);
}

int main() {
    vector<int> arr =  {1,2,3};
    vector<int> ans; // create ans arr for store all subset;

    printSubset(arr, ans, 0);

    return 0;
}