#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph {
    int V;
    list<int> *l;

    public: 
        Graph(int V){
            this -> V = V;
            l = new list<int> [V];
        }

        // only directed edges
    void addEdge(int u, int v){
        l[u].push_back(v);
    }

    //  CYCLE DETECTION IN DIRECTED GRAPH USING DFS
    bool isCycleDirDFS(int curr, vector<bool> &vis, vector<bool> &RecursivePath){
        vis[curr] = true;
        RecursivePath[curr] = true;

        for( int v : l[curr]){
            if(!vis[v]){
                if(isCycleDirDFS(v, vis, RecursivePath)){
                    return true;
                }
            } else if(RecursivePath[v]){   // neighbour is visited and also present in recursivePath
                    return true;
            }
        }

        // backtracking -> delete node from path
        RecursivePath[curr] = false;
        return false;
    } 

    bool isCycle() {
        vector<bool> visited(V, false);
        vector<bool> RecursivePath(V, false);

        for(int i=0; i<V; i++) {
            if(!visited[i]){
                if(isCycleDirDFS(i, visited, RecursivePath)){
                    return true;
                }
            }
        }
        return false;
    }



};


int main() {
    Graph g(4);

    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);

    
    cout<<g.isCycle()<<endl;
    
    

    return 0;
}