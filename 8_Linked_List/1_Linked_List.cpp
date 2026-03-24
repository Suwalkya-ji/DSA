#include<iostream>
using namespace std;

// create a single node
class Node {
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
};


// create a list after combining all node
class List {
    Node* head;
    Node* tail;

    public: 
        List(){
            head = tail = NULL;
        }

        // 1. push from front side in LL
        void push_front(int val) {
            Node* newNode = new Node(val);
            
            // if no node present in LL
            if(head == NULL){
                head = tail = newNode;
                return;
            }
            else{ // nodes are already present in list
                newNode->next = head;
                head = newNode;
            }
        }
        
        // 2. push from back side in LL
        void push_back(int val) {
            Node* newNode = new Node(val);
            if(head == NULL) {
                head = tail = NULL;
                return;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
        }
        
        // 3. pop from front side in LL
        void pop_front(){
            if(head == NULL){
                cout<<"LL is already empty \n";
                return;
            }
            
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            
            delete temp;
        }
        
        // 4. pop from back side in LL
        void pop_back() {
            if(head == NULL){
                cout<<"LL is empty \n";
                return;
            }

            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }

        // 5. insert in middle
        void insert(int val, int pos) {
            if(pos < 0) {
                cout<<"Invalid pos \n";
                return;
            }          
            
            if(pos == 0) {
                push_front(val);
                return;
            }

            Node* temp = head;
            for(int i=0; i<pos-1; i++) {
                if(temp == NULL){
                    cout<<"Invalid pos \n";
                    return;
                }
                temp = temp->next;
            }

            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
        }

        // Search in LL
        int search(int key) {
            Node* temp = head;
            int idx = 0;

            while(temp != NULL){
                if(temp->data == key){
                    return idx;
                }
                temp = temp->next;
                idx++;
            }
            return -1;
        }

        // print LL
        void print() {
            Node* temp = head;

            while(temp != NULL){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
};


int main() {

    List ll;

    // // 1. push from front side
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    
    // // 2. push from back side
    // ll.push_back(40);
    
    // ll.print();
    
    // // 3. pop from front side
    // ll.pop_front();
    // ll.print();
    
    // // 4. pop from back side
    // ll.pop_back();
    // ll.print();


    ll.insert(1,2);
    

    //print LL
    ll.print();

    // search
    cout<<ll.search(1)<<endl;

    return 0;
}