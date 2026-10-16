#include<bits/stdc++.h>
using namespace std;

// Graph Class
class Graph {

    int V;              // total vertices
    list<int> *l;       // adjacency list

public:

    // Constructor
    Graph(int V){

        // store total vertices
        this->V = V;

        // create adjacency list
        l = new list<int>[V];
    }

    // Add Edge (Directed Graph)
    void addEdge(int u , int v){
        // u -> v
        l[u].push_back(v);
    }
    // DFS Helper Function
    void pathHelper(int src ,
                    int dest ,
                    vector<bool> &vis ,
                    string path){

        // BASE CASE
        // if destination reached
        if(src == dest){
            // print complete path
            cout << path << dest << endl;
            return;
        }
        // mark current node visited
        vis[src] = true;
        // add current node into path
        path += to_string(src) + " -> ";
        // traverse all neighbours
        for(int v : l[src]){
            // if neighbour not visited
            if(!vis[v]){
                // recursive DFS call
                pathHelper(v , dest , vis , path);
            }
        }
        // backtracking
        // unvisit node
        vis[src] = false;
    }
    // Main Function
    void printAllPaths(int src , int dest){
        // visited array
        vector<bool> vis(V , false);
        // DFS call
        pathHelper(src , dest , vis , "");
    }
};
int main(){
    // create graph
    Graph graph(6);
    // add edges
    graph.addEdge(0,3);
    graph.addEdge(2,3);
    graph.addEdge(3,1);
    graph.addEdge(4,0);
    graph.addEdge(4,1);
    graph.addEdge(5,0);
    graph.addEdge(5,2);


    // print all paths from 5 to 1
    graph.printAllPaths(5 , 1);

    return 0;
}