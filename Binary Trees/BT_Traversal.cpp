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
void preorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data<<" ";
    inorder(root->right);
}
void postorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data<<" ";
}
void level_order(struct Node * root){
      queue<Node*> q;
      q.push(root);
      q.push(nullptr);
      while(q.size() > 0){
        Node*curr = q.front();
        q.pop();
        if(curr == nullptr){
             if(!q.empty()){
                cout<<endl;
                q.push(nullptr);
                continue;
             }
             else break;
        }
        cout<< curr->data << " ";
        if(curr->left != nullptr){
        q.push(curr->left);
        }
        if(curr->right != nullptr){
        q.push(curr->right);
        }

      }
      cout << endl;
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
   // preorder(root);
   //inorder(root);
    //postorder(root);
    level_order(root);
    return 0;
}