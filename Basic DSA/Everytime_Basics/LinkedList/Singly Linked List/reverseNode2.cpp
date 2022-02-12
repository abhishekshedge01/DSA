#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
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

Node* reverseNode(Node* head)
{
    Node* curr=head;
    Node* prev=NULL;
    Node* next=head;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

int main()
{
    Node *head = insertNode();
    printNode(head);
    head=reverseNode(head);
    printNode(head);
}