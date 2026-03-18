#include<iostream>
#include<climits>
using namespace std;

int maxSubArray(int nums[], int n) {
       
       int max_sum = INT_MIN;    

       for (int i = 0; i < n; i++) {
           int currSum = 0; 

           for (int j = i; j < n; j++) {
               currSum += nums[j];    
               max_sum= max(max_sum, currSum);        
           }
       }
       return max_sum;  
   }

int KadaneAlgo(int nums[], int n) {
    int CurrentSum = 0;
    int MaxSum = INT_MIN;

    for(int i=0; i<n; i++) {

        CurrentSum += nums[i];

        MaxSum = max(CurrentSum, MaxSum);
        
        if(CurrentSum < 0) {
            CurrentSum = 0;
        }
    }

    return MaxSum;
}

int main () {
    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(nums)/sizeof(int);

    // first approach using 2 loops -> Brute force approach
   int first =  maxSubArray(nums, n);
   cout<<"maximum sub array using 2 loops -> "<<first<<endl;
   
   
   // second approach Using Kadane’s Algorithm  -> Best approach  
   int second = KadaneAlgo(nums, n);
   cout<<"maximum sub array Using Kadane’s Algorithm  -> "<< second <<endl;


   return 0;
}