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

// Count of tree
int Count (Node* root) {
    if(root == NULL) {
        return 0;
    }

    int leftCount = Count(root->left);
    int rightCount = Count(root->right);

    return leftCount + rightCount + 1;
} 


int main() {
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);

    cout<<"Total numbers of nodes -> "<<Count(root)<<endl;

    return 0;
}