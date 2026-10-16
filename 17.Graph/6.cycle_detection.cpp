#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;                  // total vertices
    list<int> *l;           // adjacency list

public:

    // constructor
    Graph(int V){
        this->V = V;

        // create adjacency list
        l = new list<int>[V];
    }

    // add edge for undirected graph
    void addEdge(int u , int v){

        l[u].push_back(v);
        l[v].push_back(u);
    }

    // print graph
    void print(){

        for(int u = 0; u < V; u++){

            cout << u << " : ";

            // print neighbours
            for(int v : l[u]){
                cout << v << " ";
            }

            cout << endl;
        }
    }

    // DFS helper function
    bool UndirectedCycleHelper(int src,
                               int par,
                               vector<bool>& vis){

        // mark visited
        vis[src] = true;

        // visit all neighbours
        for(int v : l[src]){

            // if neighbour not visited
            if(!vis[v]){

                // DFS call
                if(UndirectedCycleHelper(v, src, vis)){
                    return true;
                }
            }

            // if neighbour visited
            // and not parent
            else if(v != par){

                // cycle found
                return true;
            }
        }

        return false;
    }

    // function to detect cycle
    bool isCycleUndir(){

        // visited array
        vector<bool> vis(V, false);

        // check every component
        for(int i = 0; i < V; i++){

            // if node not visited
            if(!vis[i]){

                // DFS call
                if(UndirectedCycleHelper(i, -1, vis)){
                    return true;
                }
            }
        }

        // no cycle found
        return false;
    }
};

int main(){

    int V = 5;

    Graph graph(V);

    // undirected graph
    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(0,3);
    graph.addEdge(1,2);
    graph.addEdge(3,4);

    // print graph
    graph.print();

    // check cycle
    cout << graph.isCycleUndir() << endl;

    return 0;
}