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

void ZigZag(Node *root)
{
    bool lefttoRight = true;
    stack<Node *> currlevel;
    stack<Node *> nextlevel;
    currlevel.push(root);
    while (!currlevel.empty())
    {
        if(root==NULL){
            return;
        }
        Node *temp = currlevel.top();
        currlevel.pop();
        if (temp)
        {
            cout << temp->data << " ";

            if (lefttoRight == true)
            {
                if (temp->left)
                    nextlevel.push(temp->left);
                if (temp->right)
                    nextlevel.push(temp->right);
            }
            else
            {
                if (temp->right)
                    nextlevel.push(temp->right);
                if (temp->left)
                    nextlevel.push(temp->left);
            }
        }
        if(currlevel.empty()){
            lefttoRight = !lefttoRight;
            swap(currlevel,nextlevel);
        }
    }
}
int main(){
    Node*root=new Node(12);
    root->left=new Node(9);
    root->right= new Node(15);
    root->left->left=new Node(5);
    root->left->right=new Node(10);
    //test
    ZigZag(root);
    cout<<endl;
    return 0;
}