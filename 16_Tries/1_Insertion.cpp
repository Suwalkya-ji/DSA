#include<iostream>
using namespace std;

class TrieNode {
    public:
        char data;
        TrieNode *children[26];
        bool isTerminal;

        TrieNode (char d){
            this->data = d;
            for(int i=0; i<26; i++) {
                children[i] = NULL;
            }
            isTerminal = false;
        }

};

// Insertion
void insertWord(TrieNode* root, string word) {
    // cout<<"Insert word "<<word<<endl;
    // base case
    if(word.length() == 0){
        root->isTerminal = true;
        return;
    }

    char ch = tolower(word[0]);
    int index = ch - 'a';
    TrieNode* child;

    if(root->children[index] != NULL){   //It means char node present in childrens array
        child = root->children[index];
    }
    else{                                // It means char node not present, So create node
        child = new TrieNode(ch);
        root->children[index] = child;
    }

    // recursive call for remaining word 
    insertWord(child, word.substr(1));

}

bool SearchWord(TrieNode* root, string word){
    // base case
    if(word.length() == 0){      //agar word khtm ho gaya orr length 0 ho gai to jab hum jis node pe h agar wo agar wo terminal h to true, warna false
        return root->isTerminal;
    }

    char ch = tolower(word[0]);
    int index = ch - 'a';
    TrieNode* child;

    // if char present
    if(root->children[index]  != NULL){
        child = root->children[index];
    }
    else{
        // char nhi milla
        return false; 
    }

    return SearchWord(child , word.substr(1));
}


int main() {

    TrieNode* root = new TrieNode('-');

    insertWord(root, "coding");
    insertWord(root, "code");
    insertWord(root, "coder");
    insertWord(root, "codehelp");
    insertWord(root, "baba");
    insertWord(root, "baby");
    insertWord(root, "Dinesh");

    cout<<"searching"<<endl;

    if(SearchWord(root, "coderyyy")){
        cout<<"present "<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }






    return 0;
}