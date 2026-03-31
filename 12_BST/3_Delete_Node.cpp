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

void  inOrderPrint(Node* root){
    if(root == NULL){
        return;
    }

    inOrderPrint(root->left);
    cout<<root->data<<" ";
    inOrderPrint(root->right);
}

// find inOrder Successor
Node* getInOrderSuccesser(Node* root) {
    
    while(root != NULL && root->left != NULL){
        root = root->left;
    }
    return root;
}

// Find and Delete Node

Node* deleteNode(Node* root , int val) {
    // base case
    if(root == NULL) {
        return NULL;
    }

        // find Node
    if(val < root->data){
        root->left = deleteNode(root->left, val);
    }
    else if(val > root->data) {
        root->right = deleteNode(root->right, val);
    }
    else {   // delete Node
            // val == root
        // 0, 1 children
        if(root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else { // 2 children
            Node*IS = getInOrderSuccesser(root->right);
            root->data = IS->data;
            root->right = deleteNode(root->right, IS->data);
        }

    }
    return root;
}


int main () {

    vector<int> arr = {3,2,1,5,6,4};

    Node* root = buildBST(arr);

    int key;
    cout<<"enter which node you want to delete -> ";
    cin>>key;

    cout<<"before delete : ";
    inOrderPrint(root);
    cout<<endl;

    cout<<"deleted Node -> " <<key<<endl;
    deleteNode(root, key);

    cout<<"After delete : ";
    inOrderPrint(root);
    cout<<endl;

    


    return 0;
}