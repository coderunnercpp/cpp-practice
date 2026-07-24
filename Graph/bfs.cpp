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

    void BFS(int start){
        vector<int> ans;
        vector<bool> visited(V,false);
        queue<int> q;

        q.push(start);
        visited[start] = true;
        while(!q.empty()){
            int node = q.front();
            q.pop();
           //ans.push_back(node);
            cout<< node <<" ";
            for(int neigh:adjList[node]){
               if(!visited[neigh]){
                visited[neigh] = true;
                q.push(neigh);
               }
            }
        }
    }
} ;

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(3, 4);

    cout << "BFS Traversal: ";
    g.BFS(0);

    return 0;
}