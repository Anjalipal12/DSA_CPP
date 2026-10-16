#include<bits/stdc++.h>
using namespace std;

// Undirected Graph
class Graph{

    int V;                // Total vertices
    list<int>* l;         // Adjacency list

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
        l[v].push_back(u);
    }

    // Print graph
    void print(){

        for(int u = 0 ; u < V ; u++){

            cout << u << " : ";

            for(int v : l[u]){

                cout << v << " ";
            }

            cout << endl;
        }
    }

    // BFS Traversal
    void bfs(){

        queue<int> q;

        vector<bool> vis(V , false);

        // Start from node 0
        q.push(0);

        vis[0] = true;

        while(!q.empty()){

            int u = q.front();

            q.pop();

            // Print current node
            cout << u << " ";

            // Neighbours of u
            for(int v : l[u]){

                if(!vis[v]){

                    vis[v] = true;

                    q.push(v);
                }
            }
        }

        cout << endl;
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
    cout << "Adjacency List :" << endl;

    graph.print();

    // BFS
    cout << "\nBFS Traversal :" << endl;

    graph.bfs();

    return 0;
}