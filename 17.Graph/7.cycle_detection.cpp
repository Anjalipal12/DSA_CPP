#include<bits/stdc++.h>
using namespace std;

// Directed Graph
class Graph {

    int V;                 // Total vertices

    list<int> *l;          // Adjacency List

public:

    // Constructor
    Graph(int V){

        this->V = V;

        l = new list<int>[V];
    }

    // Add Edge
    // Directed Graph : u -> v
    void addEdge(int u , int v){

        l[u].push_back(v);
    }

    // Print Graph
    void print(){

        for(int u = 0 ; u < V ; u++){

            cout << u << " : ";

            for(int v : l[u]){

                cout << v << " ";
            }

            cout << endl;
        }
    }

    // DFS Helper Function for Cycle Detection
    // vis      = visited nodes
    // recPath  = recursion path

    bool directedCycleHelper(int src ,
                             vector<bool>& vis ,
                             vector<bool>& recPath){

        // Mark current node visited
        vis[src] = true;
        // Mark node in recursion stack
        recPath[src] = true;
        list<int> neighbors = l[src];

        // Traverse neighbours
        for(int v : l[src]){

            // If node not visited
            if(!vis[v]){

                // Recursive DFS call
                if(directedCycleHelper(v , vis , recPath)){

                    return true;
                }
            }

            // If already present in recursion path
            else if(recPath[v]){

                return true;
            }
        }

        // Remove node from recursion stack
        recPath[src] = false;

        return false;
    }

    // Main Function
    bool isCycleDirected(){

        // Visited array
        vector<bool> vis(V , false);

        // Recursion path array
        vector<bool> recPath(V , false);

        // Check cycle for every component
        for(int i = 0 ; i < V ; i++){

            if(!vis[i]){
                if(directedCycleHelper(i , vis , recPath)){
                    return true;
                }
            }
        }

        return false;
    }
};

int main(){

    int V = 4;
    Graph graph(V);

    // Directed Graph
    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(2,3);
    // Cycle edge
    graph.addEdge(3,1);

    // Print graph
    cout << "Adjacency List :" << endl;
    graph.print();
    cout << endl;

    // Check cycle
    if(graph.isCycleDirected()){

        cout << "Cycle Exists";
    }
    else{

        cout << "No Cycle";
    }

    return 0;
}