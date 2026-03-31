#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val) {
            data = val;
            left = right = NULL;
        }
};

// insert in BST

Node* insert (Node* root, int val) {
    // base case
    if(root == NULL){
        return new Node(val);
    }

    if(val < root->data){
       root->left = insert(root->left, val);
    }
    else{
        root->right = insert(root->right, val);
    }

    root;
}

Node* buildBST(vector<int> arr){
    Node* root = NULL;

    for(auto val : arr) {
        root = insert(root, val);
    }

    return root;
}

//   SEARCH IN BST
bool search (Node* root, int key) {
    if(root == NULL) {
        return false;
    }

    if(root->data == key){
        return true;
    }

    if(root->data > key){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}

int main () {

    vector<int> arr = {3,2,1,5,6,4};

    Node* root = buildBST(arr);

    int key = 5;

    cout<<search(root, key)<<endl;


    return 0;
}