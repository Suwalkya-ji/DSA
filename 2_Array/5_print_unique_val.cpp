#include<iostream>
using namespace std;

void printUnique(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        bool isUnique = true;
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if(isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout<<"No Unique value present"<< endl;
}
int main() {
    int arr[] = {1,2,4,3,1,4,3,2};

    int size = sizeof(arr)/sizeof(int);

    printUnique(arr, size);

    return 0;
}