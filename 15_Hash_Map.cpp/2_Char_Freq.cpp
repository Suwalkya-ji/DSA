#include<iostream>
#include<unordered_map>

#include<map>
using namespace std;

// bool checkCircularLL(Node* head) {
//     unordered_map<Node*, bool> vis;
//     Node* temp = head;

//     while(temp != NULL) {
//         if(vis.find(temp) != vis.end()){
//             vis[temp] = true;
//         }
//         else{
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }

int main() {
    string str = "thiruvananthapuram";
    unordered_map<char,int> freq;

    // ordered map
    map<char,int> freq2;

    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        freq[ch]++;
        freq2[ch]++;   //ordered map ke liye
    }

    for(auto i: freq){
        cout<<i.first<<" -> "<<i.second;
        cout<<endl;
    }
    cout<<endl;

    cout<<"ordered map :- "<<endl;


    for(auto i: freq2){
        cout<<i.first<<" -> "<<i.second;
        cout<<endl;
    }


    return 0;
}