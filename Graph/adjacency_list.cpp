#include<bits/stdc++.h>
using namespace std;

class Graph{
    private:
    int V;
    vector<vector<int>> adjList;
    public:
    Graph(int V){ 
        this->V = V;
        adjList.resize(V);

    }

    void addEdge(int u, int v, bool directed = false){
        adjList[u].push_back(v);
        if(!directed){
            adjList[v].push_back(u);
        }
    }

    void removeEdge(int u, int v, bool directed = false){

    }

    void printGraph(){
        cout << "Adjacency List:\n";
        for(int i =0; i< V; i++){
            cout << i << "->";
            for(int neig : adjList[i]){
                cout << neig << " ";
            }
             cout<<endl;
        }
    }

    bool hasEdge(int u, int v){
        for(int neigh: adjList[u]){
        if(neigh == v)
        return true;
        }
        return false;
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(3, 4);

    g.printGraph();

    cout << "\nEdge between 1 and 3: ";
    if (g.hasEdge(1, 3))
        cout << "Yes";
    else
        cout << "No";

}