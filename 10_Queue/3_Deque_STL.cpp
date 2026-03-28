#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    dq.push_front(4);

    cout<<dq.front()<<" "<<dq.back();   // 4->front side , 3 ->back side

    
    dq.pop_back();

    cout<<endl;
    cout<<dq.front()<<" "<<dq.back();   // 4->front side , 2 ->back side

}