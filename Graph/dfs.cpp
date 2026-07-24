  #include<bits/stdc++.h>
using namespace std;

class Graph{
    private:
    int V;
    vector<vector<int>> adjList;
    public:
    Graph(int vertices){ 
        V = vertices;
        adjList.resize(V);

    }

    void addEdge(int u, int v, bool directed = false){
        adjList[u].push_back(v);
        if(!directed){
            adjList[v].push_back(u);
        }
    }

    void dfsHelper(int start,vector<bool>& visited){
        cout<<start<<" ";
        visited[start] = true;

        for(int neigh : adjList[start]){
            if(!visited[neigh]){
                dfsHelper(neigh,visited);
            }
        }

    }

    void DFS(){
        int src =0;
        vector<bool> visited(V, false);
        dfsHelper(src,visited);
    }
} ;

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
   // g.addEdge(1, 3);
    g.addEdge(3, 4);

    cout << "BFS Traversal: ";
    g.DFS();

    return 0;
}