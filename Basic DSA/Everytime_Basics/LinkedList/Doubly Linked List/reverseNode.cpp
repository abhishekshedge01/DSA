#include <bits/stdc++.h>
using namespace std;

//Doubly Linked List
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        next = NULL;
        prev=NULL;
    }
};

Node *insertNode()
{
    int data;
    cout<<"Enter data: ";
    cin >> data;
    Node *head = NULL;
    Node *temp = NULL;
    while(data!=-1)
    {
        Node* newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        cin>>data;
    }
    return head;
}

void printNode(Node* head)
{
    if(head==NULL)
    {
        return;
    }
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void reverseNode(Node* head)
{
    while(head->next!=NULL)
    {
        head=head->next;
    }
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->prev; 
    }
}


int main()
{
    Node *head = insertNode();
    Node* temp=head;
    printNode(head);
    reverseNode(temp);
    cout<<endl;
}