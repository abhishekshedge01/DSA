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

class Queue
{
    public:
    Node* head,*temp;
    int size;

    Queue()
    {
        head=NULL;
        temp=NULL;
        size=0;
    }

    bool isEmpty()
    {
        return size==0;
    }

    void enqueue(int data)
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
        ++size;   
    }

    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }
        Node* x=head;
        head=head->next;
        --size;
        delete x;
    }

    int peek()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return 0;
        }
        return head->data;
    }

    int getSize()
    {
        return size;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.dequeue();
    cout<<q.getSize()<<endl;
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    cout<<q.peek()<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<q.getSize()<<endl;
}