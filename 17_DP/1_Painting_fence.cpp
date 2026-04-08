#include<iostream>
#include<vector>

using namespace std;

//  1st Recursion => TC - exponential
int usingRecursion(int n, int k){
    // if only 1 fence
    if(n == 1) {
        return k;
    }
    if(n == 2) {
       return k+k*(k-1);
    }

    int ans = (usingRecursion(n-2, k) + usingRecursion(n-1, k)) * (k-1);
    return ans;
}

// 2nd top down optimize => TC - O(n)
int usingMemo(int n, int k, vector<int> &dp){
    if(n == 1) return k;
    if(n == 2) return k+k*(k-1);

    if(dp[n] != -1) {
        return dp[n];
    }

    dp[n] = ( usingMemo(n-2, k, dp) + usingMemo(n-1, k, dp) ) * (k-1);

    return dp[n];
}

// 3rd Tabulation
int usingTabulation(int n, int k){

    vector<int> dp(n+1, 0);

    dp[1] = k;
    dp[2] = (k+k*(k-1));

   for(int i = 3; i<=n ; i++){
        dp[i] = ( dp[i-2] + dp[i-1] ) * (k-1);
   }

    return dp[n];
}

// 4th Space Optimisation
int usingSpaceOptimisation(int n, int k){

    // 🔥 handle edge cases
        if(n == 1) return k;
        if(n == 2) return k + k*(k-1);

    int prev2 = k;
    int prev1 = (k+k*(k-1));

   for(int i = 3; i<=n ; i++){
        int curr = ( prev2 + prev1 ) * (k-1);
        // important steps
        prev2 = prev1;
        prev1 = curr;
   }

    return prev1;
}

int main() {
    int n = 4;
    int k = 3;

    //Approach 1. using recursion -> but it gives TLE in any platform
        // TC -> exponential
    int ans1 = usingRecursion(n, k);
    cout<<"Using Recursion: "<<ans1<<endl;
    
    // Approach 2. using Top Down Dp
        //  TC -> O(n) , SC -> O(n) + O(n)
    vector<int> dp(n+1, -1);
    int ans2 = usingMemo(n,k,dp);
    cout<<"Using Top Down: "<<ans2<<endl;

    // Approach 3. using Tabulation method Dp
        //  TC -> O(n)  SC -> O(n)
    int ans3 = usingTabulation(n,k);
    cout<<"Using Tabulation: "<<ans3<<endl;
    
    // Approach 4. space optimization
        // TC -> O(n)  SC -> O(1)
    int ans4 = usingSpaceOptimisation( n, k); 
    cout<<"Using space optimisation: "<<ans4<<endl;



}