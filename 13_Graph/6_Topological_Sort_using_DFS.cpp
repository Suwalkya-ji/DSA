#include<iostream>
#include<vector>
#include<list>
#include<stack>
using namespace std;

class Graph {
    int V;
    list<int> *l;

public: 
    Graph(int V) {
        this->V = V;
        l = new list<int> [V];
    }

    void addEdge(int u , int v){
        l[u].push_back(v);  //only directed edges
    }

        // core logic of Topology sort 
    void DFS_Topo(int curr, vector<bool> &vis, stack<int> &s) {
        vis[curr] = true;

        // list<int> neigh = l[curr];
        // for(int v : neigh)
        
        for(int v : l[curr]){
            if(!vis[v]){
                DFS_Topo(v, vis, s);
            }
        }
        s.push(curr);   // push the current node after visiting all the neighbour of curr node -> so we pop the stack and ans in sorted order
    }

    void TopologicalSort () {
        vector<bool> visited(V, false);
        stack<int> s;

        for(int i=0; i<V; i++) {
            if(!visited[i]){
                DFS_Topo(i, visited, s);
            }
        }

        // print ans and pop from stack so the ans will be in sorted form
        while(s.size() > 0) {
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
    }

};

int main() {

    Graph g(6);

    g.addEdge(3,1);
    g.addEdge(2,3);
    g.addEdge(4,0);
    g.addEdge(4,1);
    g.addEdge(5,0);
    g.addEdge(5,2);

    g.TopologicalSort();

    return 0;
}