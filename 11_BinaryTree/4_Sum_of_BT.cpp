#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1) return NULL;

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

// Sum of Tree
int Sum (Node* root) {
    
    if(root == NULL) return 0;

    int leftSum = Sum(root->left);
    int rightSum = Sum(root->right);

    return leftSum + rightSum + root->data;
}



int main() {
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);

    cout<<"Total Sum of all nodes -> "<<Sum(root)<<endl;

    return 0;
}