#include<bits/stdc++.h>
using namespace std;

// Graph Class
class Graph {

    int V;              // total number of vertices
    list<int> *l;       // adjacency list

public:

    // Constructor
    Graph(int V){

        // store total vertices
        this->V = V;

        // create adjacency list
        l = new list<int>[V];
    }

    // Add Edge
    // Undirected graph
    void addEdge(int u , int v){

        // u -> v
        l[u].push_back(v);

        // v -> u
        l[v].push_back(u);
    }

    // Function to check Bipartite Graph
    bool isBipartite(){

        // queue for BFS traversal
        queue<int> q;

        // color array
        // -1 = unvisited
        // 0  = blue
        // 1  = white
        vector<int> color(V , -1);


        // loop for disconnected graph
        for(int i = 0 ; i < V ; i++){

            // if node is unvisited
            if(color[i] == -1){

                // push source node into queue
                q.push(i);

                // give first color
                color[i] = 0;


                // BFS starts
                while(q.size() > 0){

                    // take front node
                    int curr = q.front();

                    // remove from queue
                    q.pop();


                    // traverse all neighbours
                    for(int neigh : l[curr]){


                        // CASE 1:
                        // if neighbour is unvisited
                        if(color[neigh] == -1){

                            // assign opposite color
                            color[neigh] = 1 - color[curr];

                            // push neighbour into queue
                            q.push(neigh);
                        }


                        // CASE 2:
                        // if neighbour already visited
                        else{

                            // if same color found
                            if(color[neigh] == color[curr]){

                                // graph is not bipartite
                                return false;
                            }
                        }
                    }
                }
            }
        }

        // graph is bipartite
        return true;
    }
};

int main(){

    // create graph with 5 vertices
    Graph graph(5);

    // add edges
    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(2,3);

    // check graph is bipartite or not
    cout << graph.isBipartite();

    return 0;
}