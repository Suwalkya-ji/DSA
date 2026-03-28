#include<iostream>
using namespace std;

class CircularQueue{

    int* arr;
    int currSize, capacity;
    int front_Idx, rear;

    public:
        // constructor
        CircularQueue(int size){
            capacity = size;
            arr = new int[capacity];
            currSize = 0;
            front_Idx = 0;
            rear = -1;
        }

        void push (int data) {   //O(1)
            // check if queue is full or not
            if(currSize == capacity){
                cout<<"Circular Queue is already full \n";
                return;
            }

            // if queue is not full than push
            rear = (rear+1)%capacity;    // rear index always in range
            arr[rear] = data;
            currSize++;
        }

        void pop () {   //O(1)
            // check if queue is empty
            if(currSize == 0){
                cout<<"Circular Queue is already empty \n";
                return;
            }

            // if queue is not empty
            front_Idx = (front_Idx + 1)%capacity;
            currSize--;
        }

        int front () {    //O(1)
            // check if queue is empty
            if(currSize == 0){
                cout<<"Circular Queue is already empty \n";
                return -1;
            }

            return arr[front_Idx];
        }


        bool empty () {  //O(1)
            return currSize == 0;
        }

        void printArr() {
            for(int i=0; i<capacity; i++) {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

};

int main () {

    CircularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);

    //cq.printArr();   // print in array form

    // print in circular queue form
    while(!cq.empty()){
        cout<<cq.front()<<" ";
        cq.pop();
    }
    cout<<endl;


    return 0;
}