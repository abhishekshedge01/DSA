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

BST* inputNode()
{
    int rootdata;
    cout<<"data: ";
    cin>>rootdata;
    if(rootdata==-1)
    {
        return NULL;
    }
    BST* root=new BST(rootdata);
    BST* leftChild=inputNode();
    BST* rightChild=inputNode();
    root->left=leftChild;
    root->right=rightChild;
    return root;
}

void printNode(BST* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<": ";
    if(root->left!=NULL)
    {
        cout<<"L"<<root->left->data<<" ";
    }
    if(root->right!=NULL)
    {
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    printNode(root->left);
    printNode(root->right);
}

int main()
{
    BST* root=inputNode();
    printNode(root);
}