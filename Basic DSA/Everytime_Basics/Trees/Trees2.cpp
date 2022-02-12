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


TreeNode* inputLevelWise()
{
    int rootdata;
    cout<<"Enter the root node: ";
    cin>>rootdata;
    TreeNode* root=new TreeNode(rootdata);
    queue <TreeNode*> pending;
    pending.push(root);
    while(!pending.empty())
    {
        TreeNode* front=pending.front();
        pending.pop();
        int numnodes;
        cout<<"Enter the number of nodes in "<<front->data<<": ";
        cin>>numnodes;
        for(int i=1;i<=numnodes;++i)
        {
            int childdata;
            cout<<"Enter the "<<i<<" th node of "<<front->data<<": ";
            cin>>childdata;
            TreeNode* child=new TreeNode(childdata);
            front->children.push_back(child);
            pending.push(child);
        }
    }
    return root;
}


void printLevelWise(TreeNode* root)
{
    if(root==NULL)
    {
        return;
    }
    queue <TreeNode*> pending;
    pending.push(root);
    while(!pending.empty())
    {
        TreeNode* front=pending.front();
        cout<<front->data<<": ";
        pending.pop();
        for(int i=0;i<front->children.size();++i)
        {
            cout<<front->children[i]->data<<", ";
            pending.push(front->children[i]);
        }
        cout<<endl;
    }
}

int main()
{
    TreeNode* root=inputLevelWise();
    printLevelWise(root);
}
