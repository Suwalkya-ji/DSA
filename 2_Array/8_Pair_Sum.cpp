#include<iostream>
#include<vector>
using namespace std;

// 1. using two loops
vector<int> pairSum(vector<int>& nums, int n, int target){
    vector<int> ans;

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

// 2. using single loop treversal
vector<int> sumPair(vector<int>& nums, int n, int target){
    vector<int> ans;
    int i = 0;
    int j = n-1;

    while(i<j) {
        int sum = nums[i] + nums[j];
        if(sum == target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if(sum > target) {
            j--;
        }
        else{
            i++;
        }
    }

}

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 17;
    int n = nums.size();

    // 1. brute force
    vector<int> ans1 = pairSum(nums, n, target);
    cout<<"Brute force ans -> ["<< ans1[0] <<", " <<ans1[1] << "]"<<endl;
    
    // 2. optimize approach using two pointer approach
    vector<int> ans2 = sumPair(nums, n, target);
    cout<<"optimal approach ans2 -> ["<< ans2[0] <<", " <<ans2[1] << "]"<<endl;

}