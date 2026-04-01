#include<iostream>
#include<list>
using namespace std;

class Graph {
     int V;  // how many vertices in graph
     list<int> *l;  // int *arr -> dynamic array declaration

     public: 
            Graph(int V){
                this->V = V; 
                l = new list<int> [V];  // arr = new int[V]  -> intialize array
            }

            // ek edge banane ke liye 2 node (vertices) chaiye hotte h 
            // edge always liee between teo edges
            void addEdge(int u, int v) {
                l[u].push_back(v);       // ek edge ki list me dusre edge ko store karwa rahe h
                l[v].push_back(u);       // u ki list(neighbours) me  v or vice versa
            }

            // print Adjajency list
            void print_Adj_List(){
                for(int i=0; i<V; i++) {
                    cout<<i<<" : ";                 // har ek node se kon kon connect h
                    for(int neighbour : l[i]){     // har ek vertex ke saare neighbour(list) me kon kon present h wo printhogga
                        cout<<neighbour<<" ";
                    }
                    cout<<endl;
                }
            }

};

int main() {

    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);


cout<<"print adjajency list :-"<<endl;
    g.print_Adj_List();

    return 0;
}