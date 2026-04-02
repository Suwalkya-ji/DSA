#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph {
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


        bool isCycleUndirectedDFS(int src , int parent, vector<bool> &vis) {

            vis[src] = true;

            list<int> neighbours = l[src];   // u ke saare neighbours ko nikal liya

            for(int v : neighbours) {
                if(!vis[v]){
                    if(isCycleUndirectedDFS(v, src, vis)){  // aage wale src prr cycle detect ho
                        return true;
                    }
                }                           //ek neighbour jo ki parent ho or jaha se wo source aaya h wo visited h orr
                else if (v != parent) {   // agar source ka ek neighbour visited ho orr parent naa ho to iska mtlb waha cycle h 
                    return true;
                }

            }


            return false;
        }


        bool isCycle() {
            vector<bool> vis(V, false);
            int parent = -1;  // no parent of starting source (u)

            for(int i=0; i<V; i++) {
                if(!vis[i]){
                   if( isCycleUndirectedDFS(i, parent, vis)){
                        return true;
                   }
                }
            }
            return false;
          }

};

int main() {

    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 2);
    g.addEdge(3, 4);

    cout<<g.isCycle()<<endl;



    return 0;
}