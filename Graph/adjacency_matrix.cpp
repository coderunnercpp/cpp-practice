#include<bits/stdc++.h>
using namespace std;

class Graph{
    private:
    int V;
    vector<vector<int>> adjacency;
    public:
    Graph(int vertices){ 
        V = vertices;
        adjacency.resize(V, vector<int>(V,0));
    }
    void addEdge(int u, int v, bool directed = false){
        adjacency[u][v] = 1;
        if(!directed){
            adjacency[v][u] = 1;
        }
    }
    void removeEdge(int u, int v, bool directed = false){
        adjacency[u][v] = 0;
        if(!directed){
            adjacency[v][u] = 0;
        }
    }
    bool hasEdge(int u, int v){
        if(adjacency[u][v]==1){
            return true;
        }
        else{
            return false;
        }
    }
    void printMatrix(){
        for(int i =0; i<V ; i++){
            for(int j =0;j<V; j++){
                cout<<adjacency[i][j]<< " ";
            }
            cout<<endl;
        }
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(3, 4);

    g.printMatrix();

    cout << "\nEdge between 1 and 3: ";
    if (g.hasEdge(1, 3))
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}