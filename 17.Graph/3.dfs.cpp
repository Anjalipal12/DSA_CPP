#include<bits/stdc++.h>
using namespace std;

// Undirected Graph
class Graph{

    int V;                 // Total number of vertices

    list<int>* l;          // Adjacency List

public:

    // Constructor
    Graph(int v){

        V = v;

        // Create array of lists
        l = new list<int>[V];
    }

    // Function to add edge
    void addEdge(int u , int v){

        l[u].push_back(v);

        l[v].push_back(u);     // Because graph is undirected
    }

    // Function to print graph
    void print(){

        for(int u = 0 ; u < V ; u++){

            cout << u << " : ";

            // Print all neighbours of u
            for(int v : l[u]){

                cout << v << " ";
            }

            cout << endl;
        }
    }

    // DFS Helper Function
    // u = current node
    // vis = visited array

    void DfsHelper(int u , vector<bool>& vis){

        // Mark current node as visited
        vis[u] = true;

        // Print current node
        cout << u << " ";

        // Traverse all neighbours
        for(int v : l[u]){

            // If neighbour not visited
            if(!vis[v]){

                // Recursive DFS call
                DfsHelper(v , vis);
            }
        }
    }

    // DFS Function
    void dfs(){

        // Initially all nodes are unvisited
        vector<bool> vis(V , false);

        // Start DFS from node 0
        DfsHelper(0 , vis);

        cout << endl;
    }
};

int main(){

    // Create graph with 5 vertices
    Graph graph(5);

    // Add edges
    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(2,3);
    graph.addEdge(2,4);

    // Print graph
    cout << "Adjacency List :" << endl;

    graph.print();

    // DFS Traversal
    cout << "\nDFS Traversal :" << endl;

    graph.dfs();

    return 0;
}