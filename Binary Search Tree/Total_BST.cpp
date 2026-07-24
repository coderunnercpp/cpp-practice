#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

public:
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
vector<Node *> constructTrees(int start, int end)
{

    vector<Node *> trees;
    if (start > end)
    {
        trees.push_back(NULL);
        return trees;
    }
    for (int i = start; i < end; i++)
    {
        vector<Node *> leftsubtree = constructTrees(start, i - 1);
        vector<Node *> rightsubtree = constructTrees(i + 1, end);
        for (int j = 0; j < leftsubtree.size(); j++)
        {
            Node *left = leftsubtree[j];
            for (int k = 0; k < rightsubtree.size(); k++)
            {
                Node *right = rightsubtree[k];
                Node *node = new Node(i);
                node->left = left;
                node->right = right;
                trees.push_back(node);
            }
        }
    }
    return trees;
}
void printpreorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    printpreorder(root->left);
    printpreorder(root->right);
}
int main()
{
    vector<Node *> total = constructTrees(1, 3);
    for (int i = 0; i < total.size(); i++)
    {
        cout << (i + 1) << " : ";
        printpreorder(total[i]);
        cout << endl;
    }
    return 0;
}