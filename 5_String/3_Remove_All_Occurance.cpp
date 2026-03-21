#include<iostream>
using namespace std; 

string remove (string str, string part){
    while(str.length() > 0  &&  str.find(part) < str.length()){
    str.erase(str.find(part), part.length());
  }
  return str;
}

int main() {
    string str = "daabcbaabcbc";
    string part = "abc";

   cout << remove(str, part);

  
    return 0;
}