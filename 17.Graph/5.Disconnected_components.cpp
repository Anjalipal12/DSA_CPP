#include<bits/stdc++.h>
using namespace std;

// Graph class
class Graph{
    int V;                 // Total number of vertices
    list<int>* l;          // Adjacency list
public:
    // Constructor
    Graph(int v){
        V = v;
        // Create array of linked lists
        l = new list<int>[V];
    }
    // Function to add edge
    void addEdge(int u, int v){
        // u -> v
        l[u].push_back(v);
        // v -> u
        // Because graph is undirected
        l[v].push_back(u);
    }

    // Function to print graph
    void print(){
        for(int i = 0; i < V; i++){
            cout << i << " : ";
            // Print all neighbours of i
            for(int neigh : l[i]){
                cout << neigh << " ";
            }
            cout << endl;
        }
    }

    // BFS helper function
    void bfsHelper(int st, vector<bool> &vis){
        queue<int> q;
        // Push starting node into queue
        q.push(st);
        // Mark starting node visited
        vis[st] = true;
        while(!q.empty()){
            // Take front node
            int curr = q.front();
            // Remove front node
            q.pop();
            // Print current node
            cout << curr << " ";
            // Traverse all neighbours
            for(int neigh : l[curr]){
                // Visit only unvisited neighbours
                if(!vis[neigh]){
                    // Mark visited
                    vis[neigh] = true;
                    // Push neighbour into queue
                    q.push(neigh);
                }
            }
        }
    }

    // BFS for disconnected graph
    void bfs(){
        // Initially all nodes are unvisited
        vector<bool> vis(V, false);
        cout << "BFS Traversal :" << endl;
        // Traverse all vertices
        for(int i = 0; i < V; i++){
            // If node is unvisited
            if(!vis[i]){
                // New disconnected component found
                // Start BFS from this node
                bfsHelper(i, vis);
                // New line after one component
                cout << endl;
            }
        }
    }

    // DFS helper function
    void dfsHelper(int u, vector<bool> &vis){
        // Print node
        cout << u << " ";
        // Mark visited
        vis[u] = true;
        // Traverse neighbours
        for(int v : l[u]){
            // Visit only unvisited neighbours
            if(!vis[v]){
                dfsHelper(v, vis);
            }
        }
    }

    // DFS for disconnected graph
    void dfs(){
        // Initially all nodes are unvisited
        vector<bool> vis(V, false);
        cout << "DFS Traversal :" << endl;
        // Traverse all nodes
        for(int i = 0; i < V; i++){
            // If node is unvisited
            if(!vis[i]){
                // New disconnected component found
                // Start DFS
                dfsHelper(i, vis);
                // New line after one component
                cout << endl;
            }
        }
    }
};

int main(){
    // Create graph with 7 vertices
    Graph g(7);
    /*
            Disconnected Graph

            0 --- 1 --- 2

            3 --- 4

            5 --- 6
    */
    // Component 1
    g.addEdge(0,1);
    g.addEdge(1,2);
    // Component 2
    g.addEdge(3,4);
    // Component 3
    g.addEdge(5,6);

    // Print adjacency list
    cout << "Adjacency List :" << endl;
    g.print();
    cout << endl;
    // BFS Traversal
    g.bfs();
    cout << endl;
    // DFS Traversal
    g.dfs();
    return 0;
}