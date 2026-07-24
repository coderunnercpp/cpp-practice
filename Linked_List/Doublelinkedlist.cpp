#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *previous;
    node(int val)
    {
        data = val;
        next = NULL;
        previous = NULL;
    }
};
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->previous = n;
    }
    head = n;
}
void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->previous = temp;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    head->previous = NULL;
    delete todelete;
}
void deletion(node *&head, int pos)
{
    node *temp = head;
    int count = 1;
    if (head == NULL)
    {
        return;
    }
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }

    while (count != pos && temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    temp->previous->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->previous = temp->previous;
    }
    delete temp;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    //insertAtHead(head,7);
    //display(head);
    deletion(head, 5);
    display(head);
    return 0;
}