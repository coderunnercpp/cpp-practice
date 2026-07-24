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
int Max_sumUtil(Node *root, int &ans)
{
    if (root == NULL)
        return 0;
    int left = Max_sumUtil(root->left, ans);
    int right = Max_sumUtil(root->right, ans);

    int NodeMax = max(max(root->data, root->data + left + right), max(root->data + left, root->data + right));

    ans = max(ans, NodeMax);

    int singlepathSum = max(root->data, max(root->data + left, root->data + right));

    return singlepathSum;
}

int Max_sum(Node *root)
{
    int ans = INT_MIN;
    Max_sumUtil(root, ans);

    return ans ;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);
    //root->right->left = new Node(6);
    //root->right->right = new Node(7);
    cout << Max_sum(root);
    return 0;
}
