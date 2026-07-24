#include <bits/stdc++.h>

using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
//case1
void printsubtreeNodes(Node *root, int k)
{
    if (root == NULL || k < 0)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }
    printsubtreeNodes(root->left, k - 1);
    printsubtreeNodes(root->right, k - 1);
}
//case2
int printNodesatK(Node *root, Node *target, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root == target)
    {
        printsubtreeNodes(root, k);
        return 0;
    }

    int dl = printNodesatK(root->left, target, k);
    if(dl !=-1){
        if(dl+1==k){
            cout<<root->data<<" ";
        } else {
            printsubtreeNodes(root->right,k-dl-2);
        }
        return dl+1;
    }
    int dr = printNodesatK(root->right, target, k);
    if(dr !=-1){
        if(dr+1==k){
            cout<<root->data<<" ";
        } else {
            printsubtreeNodes(root->left,k-dr-2);
        }
        return dr+1;
    }
    return -1;
    
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    printNodesatK(root,root->left,2);

    return 0;
}
