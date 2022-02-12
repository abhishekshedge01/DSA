#include <bits/stdc++.h>
using namespace std;

class Queue
{
    public:
    int *arr;
    int rearIndex;
    int frontIndex;
    int size;
    int capacity;

    Queue(int total)
    {
        capacity=total;
        arr=new int[total];
        frontIndex=-1;
        rearIndex=0;
        size=0;
    }

    bool isEmpty()
    {
        return size==0;
    }

    bool isFull()
    {
        return size==capacity;
    }

    int peek()
    {
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return 0;
        }
        return arr[frontIndex];
    }

    void enqueue(int data)
    {
        if(isFull())
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        if(frontIndex==-1)
        {
            frontIndex=0;
        }
        arr[rearIndex]=data;
        rearIndex=(rearIndex+1)%capacity;
        ++size;
    }

    void dequeue()
    {
        if(isEmpty() || frontIndex==-1)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        frontIndex=(frontIndex+1)%capacity;
        --size;
    }

    int getSize()
    {
        return size;
    }
};

int main()
{
    Queue q(3);
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
}