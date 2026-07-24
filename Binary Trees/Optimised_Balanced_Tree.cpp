#include<bits/stdc++.h>

using namespace std;
 struct Node{
    int data;
    struct Node*left;
    struct Node*right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

 };
 bool Is_Balanced(Node*root,int*height){
    int lh =0; int rh =0;
    if(root==NULL){
        return true;
    }
    if(Is_Balanced(root->left,&lh)==false){
        return false;
    }
    if(Is_Balanced(root->right,&rh)==false){
        return false;
    }
    *height = max(lh,rh)+1;
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
 }
 int main(){
     struct Node* root= new Node(1);
     root->left=new Node(2);
    //root->right = new Node(3);
    root->left->left= new Node(4);
    //root->left->right= new Node(5);
    //root->right->left= new Node(6);
    //root->right->right= new Node(7);
    int height =0;
    if(Is_Balanced(root,&height)==true){
       cout<<"Tree is balanced"<<" ";
    }
    else{
        cout<<"Unbalanced Tree"<<" ";
    }

    return 0;

 }
