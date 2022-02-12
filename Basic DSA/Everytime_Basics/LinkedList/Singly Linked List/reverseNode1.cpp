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
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node* temp=reverseNode(head->next);
    head->next->next=head;
    head->next=NULL;
    return temp;
}

int main()
{
    Node *head = insertNode();
    printNode(head);
    head=reverseNode(head);
    printNode(head);
    cout<<endl;
}