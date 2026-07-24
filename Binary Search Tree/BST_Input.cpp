#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
   public:
   Node(int val){
       data = val;
       left=NULL;
       right=NULL;
   }
};
Node* InsertBST(Node*root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left=InsertBST(root->left,val);
    }else{
        root->right=InsertBST(root->right,val);
    }
    return root;

}
void inorder(Node*root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
} 
int main(){
    Node*root=NULL;
    root=InsertBST(root,5);
    InsertBST(root,1);
    InsertBST(root,3);
    InsertBST(root,4);
    InsertBST(root,2);
    InsertBST(root,7);
    
    //print inorder
    inorder(root);


    return 0;
}