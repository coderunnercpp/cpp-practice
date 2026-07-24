#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
    public:

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }


};
//check for BST
bool isBST(Node*root,Node*min=NULL, Node* max=NULL){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data<=min->data){
        return false; 
    }
     if(max!=NULL && root->data>=max->data){
        return false; 
    }
    bool leftvalid = isBST(root->left,min,root);
    bool rightvalid = isBST(root->right,root,max);

return leftvalid && rightvalid;

}

int main(){

    Node*root=new Node(2);
    root->left= new Node(1);
    root->right=new Node(3);
    if (isBST(root,NULL,NULL)){
        cout<<"BST is valid"<<endl;
    }
    else {
        cout<<"BST not valid"<<endl;
    }

}