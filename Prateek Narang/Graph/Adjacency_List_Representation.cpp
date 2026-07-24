#include <bits/stdc++.h>
using namespace std;
class graph
{
    list<int> *l;//Pointer to an array of list
    int V;

public:
    graph(int v)
    {
        V = v;
        l = new list<int>[V];
    }
    void addEdge(int i , int j, bool undirec=true){
        l[i].push_back(j);
        if(undirec){
            l[j].push_back(i);
        }
    }
    void printadjList(){
        //Iterate over all the rows
        for(int i=0;i<V;i++){
            cout<<i<<"-->";
            //every element of ith ll
            for(auto node :l[i]){
                cout<<node<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(2,1);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(3,5);
    g.printadjList();

    return 0;
}