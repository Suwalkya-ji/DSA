#include<iostream>
using namespace std;

class Heap {
public: 

    int arr[100];
    int size;

    Heap() {
            arr[0] = -1;
            size = 0;
    }

// 1. Insert values in HEAP 

    void insert(int val){   // O(log n)
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1) {
            int parent_idx = index/2;
            if(arr[parent_idx] < arr[index]){
                swap(arr[parent_idx], arr[index]);
                index = parent_idx;
            }
            else{
                return;
            }
        }
    }


    // 2.  Delete the root node or first node

    void deleteFromHeap() {    // O(log n)
        if(size == 0) {
            return;
        }

        // put last element onto 1st element
        arr[1] = arr[size];

        // remove last element
        size--;

        // take root node to its correct position
        int i = 1;
        while(i < size) {
            int leftChild_Index = 2*i;
            int rightChild_Index = 2*i+1;

            // compare root node with left child
            if(leftChild_Index < size && arr[i] < arr[leftChild_Index]){
                swap(arr[i], arr[leftChild_Index]);
                i = leftChild_Index;
            }

            // compare root node with right child
             else if(rightChild_Index < size && arr[i] < arr[rightChild_Index]){
                swap(arr[i], arr[rightChild_Index]);
                i = rightChild_Index;
            }

            else{
                return;
            }
        }
    }

    void print() {
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};


// 3.  Heapify -> max and min chnage conditions only

void Heapify(int arr[], int size, int i) {   //O(log(n))   => MAX HEAP
    int largest = i;   //int root = i
    int left = 2*i;
    int right = 2*i + 1;

    if(left <= size && arr[largest] < arr[left]){
        largest = left;
    }

    if(right <= size && arr[largest] < arr[right]){
        largest = right;
    }


    // check root is same or not if not than swap
    if(largest != i){
        swap(arr[largest],arr[i]);
        Heapify(arr, size, largest); 
    }

}


//  4. Heap Sort  ->  max heap
    void HeapSort(int arr[], int n) {   // O(nlogn)
        int size = n;

        while(size > 1) {
        // step 1 -> swap
        swap(arr[size], arr[1]);
        size--;

        // step 2 -> sort
        Heapify(arr, size, 1);

        }


    }

int main() {

    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    cout<<"before delete -> ";
    h.print();

    h.deleteFromHeap();
    

    cout<<"after delete -> ";
    h.print();





    // array 
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;


    // heap creation usnig -> heapify 
    for(int i = n/2; i>0; i--) {
        Heapify(arr, n, i);
    }

    // printing the array now
    cout<< "MAX HEAP => ";
    for(int i=1; i<=n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    


    // heap sort
    HeapSort(arr, n);

    cout<< "Sorted HEAP => ";
    for(int i=1; i<=n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}