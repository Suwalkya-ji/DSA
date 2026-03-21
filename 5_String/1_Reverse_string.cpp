#include<iostream>
using namespace std;

int main() {
    string str = "Dinesh";
    int len = str.length();

    int start = 0;
    int end = len-1;

    while(start < end){
        swap(str[start], str[end]);
        start++;
        end--;
    }

    cout<<"reverse string -> "<<str;

    return 0;
}