#include<iostream>
#include<limits.h>
using namespace std;

int main() {
    int arr[] = {5,15,22,-1,-15,24};
    int size = 6;

    // 1-st method
    int maxi = INT_MIN;
    int mini = INT_MAX;

    // 2-nd method
    int maximum = INT_MIN;
    int minimum = INT_MAX;


    for(int i=0; i<size; i++) {
        // 1-st method
        if(arr[i] < mini) {
            mini = arr[i];
        }
        if(arr[i] > maxi){
            maxi = arr[i];
        }

        // 2-nd method
        maximum = max(arr[i], maximum);
        minimum = min(arr[i], minimum);
    }


    cout<<"1st method long -: "<<endl;
    cout<<"mini -> "<<mini<<endl;
    cout<<"maxi -> "<<maxi<<endl;


    cout<<"2nd method short -: "<<endl;
    cout<<"maximum -> "<<maximum<<endl;
    cout<<"minimum -> "<<minimum<<endl;

    return 0;
}