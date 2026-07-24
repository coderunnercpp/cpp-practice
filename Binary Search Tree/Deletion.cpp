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
        right= NULL;
    }
};
//Inorder successor
Node*inordersucc(Node*root){
    Node*curr=root;
    while(curr && curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}
//DELETE in BST
Node*deleteinBST(Node*root, int key){
    if(root==NULL){
        return NULL;
    }
    if(key<root->data){
        root->left= deleteinBST(root->left,key);
        
    }
    else if(key>root->data){
        root->right= deleteinBST(root->right,key);
      
    }
    else {
        if(root->left==NULL){
            Node*temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            Node*temp = root->left;
            free(root);
            return temp;
        }
      //case 3
      Node*temp = inordersucc(root->right);
      root->data=temp->data;
      root->right= deleteinBST(root->right,temp->data);



    }
    return root;


}
void inorder(Node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);


}
int main(){
    Node*root=new Node(4);
    root->left= new Node(2);
    root->right= new Node(5);
    root->left->left= new Node(1);
    root->left->right= new Node(3);
    root->right->right= new Node(6);
    inorder(root);
    cout<<endl;
    root=deleteinBST(root,5);
    inorder(root);



    return 0;
}
