#include<bits/stdc++.h>
using namespace std;
struct Node{
     int data;
     Node*left;
     Node*right;
     public:
     Node(int val ){
         data = val;
         left =NULL;
         right = NULL;

     }
};
int height(Node*root){
    if(root ==NULL){
        return 0;
    }
    int lheight= height(root->left);
    int rheight= height(root->right);
    return max(lheight,rheight)+1;
}

int32_t main()

{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<height(root);

}