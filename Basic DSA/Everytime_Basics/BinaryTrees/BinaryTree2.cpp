#include <bits/stdc++.h>
using namespace std;

class BST
{
    public:
    int data;
    BST* left;
    BST* right;

    BST(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

BST* inputLevelWise()
{
    int rootdata;
    cout<<"Enter the root value: ";
    cin>>rootdata;
    if(rootdata==-1)
    {
        return NULL;
    }
    BST* root=new BST(rootdata);
    queue <BST*> pending;
    pending.push(root);
    while(!pending.empty())
    {
        BST* front=pending.front();
        pending.pop();
        cout<<"Enter the left node of "<<front->data<<": ";
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1)
        {
            BST* lChild=new BST(leftdata);
            front->left=lChild;
            pending.push(lChild);
        }
        cout<<"Enter the right node of "<<front->data<<": ";
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1)
        {
            BST* rChild=new BST(rightdata);
            front->right=rChild;
            pending.push(rChild);
        }
    }
    return root;
}

void printLevelWise(BST* root)
{
    if(root==NULL)
    {
        return;
    }
    queue <BST*> pending;
    pending.push(root);
    while(!pending.empty())
    {
        BST* front=pending.front();
        cout<<front->data<<": ";
        pending.pop();
        if(front->left!=NULL)
        {
            cout<<"L"<<front->left->data<<" ";
            pending.push(front->left);
        }
        if(front->right!=NULL)
        {
            cout<<"R"<<front->right->data<<" ";
            pending.push(front->right);
        }
        cout<<endl;
    }
}

int main()
{
    BST* root=inputLevelWise();
    printLevelWise(root);
}