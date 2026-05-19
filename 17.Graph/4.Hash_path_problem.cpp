#include<bits/stdc++.h>
using namespace std;

// Undirected Graph Class
class Graph{

    int V;                  // Total number of vertices

    list<int>* l;           // Adjacency List

public:

    // Constructor
    Graph(int v){

        V = v;

        // Create array of lists
        l = new list<int>[V];
    }

    // Function to add edge
    void addEdge(int u , int v){

        // u -> v
        l[u].push_back(v);

        // v -> u
        l[v].push_back(u);
    }

    // Function to print graph
    void print(){

        for(int u = 0 ; u < V ; u++){

            cout << u << " : ";

            // Print neighbours of node u
            for(int v : l[u]){

                cout << v << " ";
            }

            cout << endl;
        }
    }

    // Helper Function for Has Path
    // src  = current node
    // dest = destination node
    // vis  = visited array

    bool pathHelper(int src , int dest , vector<bool>& vis){

        // Base Case
        // If source becomes destination
        if(src == dest){

            return true;
        }

        // Mark current node visited
        vis[src] = true;

        // Traverse all neighbours
        for(int v : l[src]){

            // Visit only unvisited neighbours
            if(!vis[v]){

                // Recursive DFS call
                if(pathHelper(v , dest , vis)){

                    return true;
                }
            }
        }

        // No path found
        return false;
    }

    // Main Has Path Function
    bool hasPath(int src , int dest){

        // Initially all nodes are unvisited
        vector<bool> vis(V , false);

        // Call helper function
        return pathHelper(src , dest , vis);
    }
};

int main(){

    // Create graph with 7 vertices
    Graph graph(7);

    // Add edges
    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(2,4);
    graph.addEdge(3,4);
    graph.addEdge(3,5);
    graph.addEdge(4,5);

    // Print graph
    cout << "Adjacency List :" << endl;

    graph.print();

    cout << endl;

    // Check path between 5 and 6
    if(graph.hasPath(5,6)){

        cout << "Path Exists" << endl;
    }
    else{

        cout << "Path Does Not Exist" << endl;
    }

    return 0;
}