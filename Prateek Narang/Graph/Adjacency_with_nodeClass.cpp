#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string name;
    list<string> nbrs;

    Node(string name)
    {
        this->name = name;
    }
};
class graph
{
    //All nodes
    //Hashmap(string,Node*)  
    unordered_map<string, Node *> m;

public:
    graph(vector<string> cities)
    {
        for (auto city : cities)
        {
            m[city] = new Node(city);
        }
    }

    void addEdge(string x, string y, bool undirec = false)
    {
        m[x]->nbrs.push_back(y);
        if (undirec)
        {
            m[y]->nbrs.push_back(x);
        }
    }
    void printAdjList()
    {
        for (auto cityPair : m)
        {
            auto city = cityPair.first;
            Node *node = cityPair.second;
            cout<<city<<"-->";
            for(auto nbr : node->nbrs){
                cout<<nbr<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    vector<string> cities = {"Delhi", "London", "paris", "NewYork"};
    graph g(cities);
    g.addEdge("Delhi", "London");
    g.addEdge("NewYork", "London");
    g.addEdge("Delhi", "paris");
    g.addEdge("paris", "NewYork");
    g.printAdjList();

    return 0;
}