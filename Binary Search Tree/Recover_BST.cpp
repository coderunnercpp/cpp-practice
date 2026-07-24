#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node*left,*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void calcpointers(Node*root, Node**first,Node**mid,Node**last,Node**prev){
         if(root==NULL){
            return ;
         }
        calcpointers(root->left,first,mid,last,prev);
        
        if(*prev && root->data<(*prev)->data ){
            if(!*first){
                 *first = *prev;
                 *mid=root;

            }
            else{
                *last=root;

            }
        }
        *prev=root;
        calcpointers(root->right,first,mid,last,prev);
}
void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b =temp;
}
void RestoreBST(Node*root){
    Node*first,*mid,*last;
    Node*prev;
    first=mid=last=prev=NULL;

    calcpointers(root,&first,&mid,&last,&prev);
        //CASE1
        if(first && last){
            swap(&(first->data),&(last->data));
        }
        else if(first && mid){
            swap(&(first->data), &(mid->data));
        }
    
}
int main(){
    return 0;
}