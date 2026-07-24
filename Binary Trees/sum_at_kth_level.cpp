#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        Node *left = NULL;
        Node *right = NULL;
    }
};

int kLevelsum(Node *root, int k)
{

    if (root == NULL)
    {
        return -1;
    }

    queue<Node *> q;
    q.push(root);
    int level = 0;
    int sum = 0;
    while (!q.empty())
    {
        for (int i = 0; i < q.size(); i++)
        {
            Node *node = q.front();
            q.pop();

            if (level == k)
            {
                sum = sum + node->data;
            }
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
        }
        level ++;
    }
    return sum;
}

int32_t main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout << kLevelsum(root, 2);
    return 0;
}