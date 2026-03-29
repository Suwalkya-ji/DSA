#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node (int val) {
        data = val;
        left = right =  NULL;
    }
};

static int index = -1;

Node* buildTree(vector<int> preorder){
    index++;

    // base case
    if(preorder[index] == -1) return NULL;
    

    Node* root = new Node(preorder[index]);
    root -> left = buildTree(preorder);   // create left sub tree
    root -> right = buildTree(preorder);    // create right sub tree
    
    return root;
}



// 1. preOrder Traversal    (root -> left -> right)
void PreOrder(Node* root){
    
    // base case
    if(root == NULL){
        return;
    }
    
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}


// 2. InOrder Traversal    (left -> root -> right)

void InOrder(Node* root){
    // base case
    if(root == NULL) return;

    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

// 3. PostOrder Traversal    (left -> right -> root)

void PostOrder(Node* root){
    // base case
    if(root == NULL) return;

    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

//  4. Level Order traversel -> linear output -> 1,2,3,4,5

void levelOrder(Node* root){
    queue<Node*> q;

    q.push(root);

    while(q.size() > 0) {
        Node* curr  = q.front();
        q.pop();
        
        cout<<curr->data<<" ";

        // push left elements of node
        if(curr->left != NULL){
            q.push(curr->left);
        }
        
        // push right elements of node
        if(curr->right != NULL) {
            q.push(curr->right);
        }
    }
    cout<<endl;
}

//  5. Level Order traversel -> tree like output -> 1
                                                //  2 3
                                                //  4 5

void levelOrder_TreeLikePrint(Node* root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(q.size() > 0) {
        Node* curr  = q.front();
        q.pop();

        if(curr == NULL) {
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }
            else{
                break;
            }
        }
        
        cout<<curr->data<<" ";

        // push left elements of node
        if(curr->left != NULL){
            q.push(curr->left);
        }
        
        // push right elements of node
        if(curr->right != NULL) {
            q.push(curr->right);
        }
    }
    cout<<endl;
}




int main () {

    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);

    // cout<<root->data<<endl;
    // cout<<root->left->data<<endl;
    // cout<<root->right->data<<endl;
    
    cout<<"1. Preorder Traversal --> ";
    PreOrder(root);

cout<<endl;

    cout<<"2. Inorder Traversal --> ";
    InOrder(root);

cout<<endl;

    cout<<"3. PostOrder Traversal --> ";
    PostOrder(root);

cout<<endl;

    cout<<"4. levelOrder Traversal --> ";
    levelOrder(root);

cout<<endl;

    cout<<"4. levelOrder_TreeLikePrint Traversal --> "<<endl;
    levelOrder_TreeLikePrint(root);

    return 0;
}
