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

int main () {

    vector<int> arr = {3,2,1,5,6,4};

    Node* root = buildBST(arr);

    cout<<"Inorder BST -> ";

    inOrderPrint(root);

    return 0;
}