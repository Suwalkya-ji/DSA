#include <iostream>
using namespace std;

void interSection(int arr1[], int arr2[], int n1, int n2) {
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;  // avoid duplicate printing
            }
        }
    }
}

int main() {
    int arr1[] = {1,5,8,9,6,3,4,7};
    int n1 = 8;

    int arr2[] = {11,5,8,19,6,13,4,7};
    int n2 = 8;

    cout << "Intersection: ";
    interSection(arr1, arr2, n1, n2);

    return 0;
}
