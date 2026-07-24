#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtTail(Node *&head, int val)
{

    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
 bool containCycles(Node*head){
    unordered_map<Node*,bool> hashtable;
    Node* temp = head;
    while(temp!=NULL){
        //check if temp already exists in thr hashtable
        if(hashtable.count(temp)!=0){
            return true;
        }
        //insert in the hashtable
        hashtable[temp]=true;
        temp=temp->next;

    }
    return false;
 }

int main(){
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 3);
    insertAtTail(head, 3);
    // Node*temp=head->next->next->next->next;
    // temp->next=head->next->next;
    if(containCycles(head)){
        cout<<"Cycles are present"<<endl;
    }
    else
    cout<<"cycle not present"<<endl;
       
    return 0;
}