#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
    public:
    int data;
    vector <TreeNode*> children;

    TreeNode(int data)
    {
        this->data=data;
    }
};

TreeNode* inputNode()
{
    int rootdata;
    cout<<"Enter data: ";
    cin>>rootdata;
    TreeNode* root=new TreeNode(rootdata);
    cout<<"Enter number of Nodes of "<<rootdata<<": ";
    int numnodes;
    cin>>numnodes;
    for(int i=1;i<=numnodes;++i)
    {
        TreeNode* child=inputNode();
        root->children.push_back(child);
    }
    return root;
}

void printNode(TreeNode* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<": ";
    for(int i=0;i<root->children.size();++i)
    {
        cout<<root->children[i]->data<<" ";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();++i)
    {
        printNode(root->children[i]);
    }
}

int main()
{
    TreeNode* root=inputNode();
    printNode(root);
}
