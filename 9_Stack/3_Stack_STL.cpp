#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(100);
    s.push(200);
    s.push(300);

    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}