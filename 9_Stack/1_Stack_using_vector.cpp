#include<iostream>
#include<vector>
using namespace std;

class Stack {
   vector<int> v;    
// if we want to create stack using array change this line create array , but in array stack can be limit in size and in vector dynamic memory
   
   public:
            void push(int val){     //O(1) constant TC 
                v.push_back(val);
            }

            void pop(){             //O(1) constant TC 
                v.pop_back();
            }

            int top(){              //O(1) constant TC 
                return v[v.size()-1];
            }

            bool empty() {
                return v.size() == 0;
            }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";

    return 0;
}