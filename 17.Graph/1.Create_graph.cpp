#include<bits/stdc++.h>
using namespace std;
//undirected graph : list<int>[v]  (where int = neighbour)
//directed graph : list<pair<int,int>>[v]  (where int = neighbour , int = weight)

class Graph{

    int V;              // Total vertices
    list<int>* l;       // Adjacency list

public:

    // Constructor
    Graph(int v){

        V = v;

        // Create array of lists
        l = new list<int>[V];
    }

    // Add edge
    void addEdge(int u , int v){

        l[u].push_back(v);
        l[v].push_back(u);     // Undirected graph
    }

    // Print graph
    void print(){

        for(int u = 0 ; u < V ; u++){

            cout << u << " : ";

            // Print neighbours
            for(int v : l[u]){

                cout << v << " ";
            }

            cout << endl;
        }
    }
};

int main(){

    Graph graph(5);

    // Adding edges
    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(2,3);
    graph.addEdge(2,4);

    // Print graph
    graph.print();

    return 0;
}