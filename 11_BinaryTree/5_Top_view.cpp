#include <iostream>
#include <queue>
#include <vector>
#include <map>
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

static int idx = -1;

Node* buildTree(vector<int> preorder){

    idx++;
    if(preorder[idx] == -1) return NULL;

    Node* curr = new Node(preorder[idx]);

    curr -> left = buildTree(preorder);
    curr -> right = buildTree(preorder);

    return curr;
}

//  Top view using level order traversel
void topView(Node* root){
                                // HD -> horizontal distance
    queue<pair<Node*,int>> q;  // store (node , horizontal distance)

    map<int,int> m;   // store <horizontal distance , node value>   -> order map isliye taaki hume value -1 origin se positive waali mille
    
    q.push({root, 0});  // for origin

    while(q.size() > 0) {
        Node* curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

        // find HD in map
        if(m.find(currHD) == m.end()){  // isme agar wo currHD nhi milta h to curr->data bhej do
            m[currHD] = curr->data;
        }
        

        if(curr->left != NULL){
            q.push({curr->left, currHD-1});
        }
        if(curr->right != NULL) {
            q.push({curr->right, currHD+1});
        }
    }

    // ab map me saari value hoogi top view ke hisab se 
    for(auto it : m){
        cout<<it.second<<" ";
    }
    cout<<endl;
}

int main () {

    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);

    topView(root);


    return 0;
}