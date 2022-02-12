#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int capacity;
    int size;
    int *arr;
    int currIndex;
    public:

    Stack(int totalsize)
    {
        arr=new int[totalsize];
        capacity=totalsize;
        size=0;
        currIndex=0;
    }

    bool isEmpty()
    {
        return size==0;
    }

    bool isFull()
    {
        return size==capacity;
    }

    void push(int data)
    {
        if(isFull())
        {
            cout<<"Stack is Full"<<endl;
            return;
        }
        arr[currIndex]=data;
        ++currIndex;
        ++size;
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return;
        }
        --currIndex;
        --size;
    }

    int top()
    {
       if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        return arr[currIndex-1];
    }

    int getSize()
    {
        return size;
    }
};

int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(30);
    s.push(19);
    cout<<s.top()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    s.push(10);
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    cout<<s.top()<<endl;
}

