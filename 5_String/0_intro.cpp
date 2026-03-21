#include<iostream>
using namespace std;

int main() {
    // char array
    char ch[] = {'a', 'b', 'c', '\0'};
    cout<<ch<<endl;

    // char str1[100];
    // cout<<"enter input -> ";
    // cin>>str1;  // stop taking input after space
    // cout<<"cin -> "<<str1<<endl;
    
    // char str2[20];
    // cout<<"enter input in getline -> ";
    // cin.getline(str2, 20, '$');
    // cout<<str2<<endl;


    // // find length

    // char str[] = "Dinesh ";
    // int len = 0;
    // for(int i=0; str[i] != '\0'; i++) {
    //     len++;
    // }

    // cout<<"length -> " <<len;
 



    //  Strings

    // string str = "Dinesh suwalkya";
    // str = "dinesh";
    // cout<<str;


    string str1 = "Dinesh";
    string str2 = "Suwalkya";

    // concatinate
    string str3 = str1+str2;
    cout<<str3<<endl;

    cout<<(str1 == str2)<<endl;

    cout<<(str1 < str2)<<endl;

    cout<<"length -> "<<str1.length()<<endl;
    
    // string str4;
    // cout<<"enter input in string -> ";
    // cin>>str4; // input before space
    // cout<<str4<<endl;

    
    string str5;
    cout<<"enter input in string -> ";
    getline(cin, str5); // input before space
    cout<<str5<<endl;

    // iterate on string
    for(char ch: str5) {
        cout<<ch<<" ";
    }
     
    cout<<endl;

    for(int i=0; i<str5.length(); i++) {
        cout<<str5[i]<<" ";
    }







    
}