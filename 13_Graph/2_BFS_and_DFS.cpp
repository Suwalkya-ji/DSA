#include <iostream>
#include <list>
#include<queue>
using namespace std;

class Graph  {
    int V;
    list<int> *l;

    public: 
        Graph(int V){
            this->V = V;
            l = new list<int> [V];
        }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    //  Breadth First Search
    void BFS() {                //T.C ->  O(V+E)
        queue<int> Q;
        vector<bool> visited(V, false);

        Q.push(0);
        visited[0] = true;

        while(Q.size() > 0) {
            int u = Q.front();   // u->source node
            Q.pop();

            cout<<u<<" ";

            for(int v : l[u]){   // v-> destination or immediate neighbour
                if(!visited[v]) {        // check neighbour is not visited
                    visited[v] = true;
                    Q.push(v);
                }  
            }
        }
        cout<<endl;
    }



    // Depth First Search   
    void DFS_Helper(int u, vector<bool> &vis){
        
        cout<<u<<" ";
        vis[u] = true;

        for(int v : l[u]){
            if(!vis[v]){
                DFS_Helper(v, vis);
            }
        }
    }

    void DFS() {
        int src = 0;
        vector<bool> visited(V, false);

        DFS_Helper(src, visited);
    }



};


int main() {

    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);


    cout<<"BFS : ";
    g.BFS();

    cout<<"DFS : ";
    g.DFS();



    return 0;
}
