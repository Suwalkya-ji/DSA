#include<iostream>
using namespace std;

bool isAlphNumeric(char ch) {
    if( (ch >= '0' && ch <= '9') || 
    (tolower(ch) >='a' && tolower(ch) <='z')){
        return true;
    }
    return false;
}

bool checkPalindrome(string str, int len){
    int s = 0;
    int e = len-1;

    while(s<e) {

        // check charter is aplha numeric or not

       if(!isAlphNumeric(str[s])) {
            s++;
            continue;
        }

        if(!isAlphNumeric(str[e])) {
            e--;
            continue;
        }

        if(tolower(str[s]) != tolower(str[e])){
            return false;
        } 
        s++;
        e--;
    }
    return true;
}

int main () {
    string str = "AC3?e3C&a";
    int len = str.length();

    if(checkPalindrome(str, len)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    

    return 0;
}