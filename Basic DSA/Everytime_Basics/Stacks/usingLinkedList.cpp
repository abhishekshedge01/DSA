#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

class Stack
{
    Node* head,*temp;
    int size;
    public:
    Stack()
    {
        size=0;
        head=NULL;
        temp=NULL;
    }

    void push(int value)
    {
        Node* newnode=new Node(value);
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            newnode->next=head;
            head=newnode;
        }
        ++size;
    }

    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        return head->data;
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return;
        }
        head=head->next;
        --size;        
    }

    bool isEmpty()
    {
        return size==0;
    }

    int getSize()
    {
        return size;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.top()<<endl;
    cout<<s.getSize()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.getSize()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
}