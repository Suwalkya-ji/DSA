#include<iostream>
#include<queue>
using namespace std;

int main() {
    cout << "We use Priority_queue STL for HEAP "<<endl<<endl;


    cout<<"Create Max Heap :-"<<endl;

    // create MAX HEAP
    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"Element in top => "<<pq.top()<<endl;
    
    // pop element
    pq.pop();
    
    cout<<"Element in top after pop => "<<pq.top()<<endl;

    cout<<"Size of Heap => "<<pq.size()<<endl;

    if(pq.empty()){
        cout<<"Heap is empty "<<endl;
    }
    else{
        cout<<"Heap is not empty "<<endl;
    }


cout<<endl<<endl<<endl;

    // ######   MIN HEAP
    
    cout<<"Create Min Heap :-"<<endl;
    
    priority_queue<int, vector<int>, greater<int>> minHeap;


    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(3);

    cout<<"Element in top => "<<minHeap.top()<<endl;
    
    // pop element
    minHeap.pop();
    
    cout<<"Element in top after pop => "<<minHeap.top()<<endl;

    cout<<"Size of Heap => "<<minHeap.size()<<endl;

    if(minHeap.empty()){
        cout<<"Heap is empty "<<endl;
    }
    else{
        cout<<"Heap is not empty "<<endl;
    }


    
    

    return 0;
}