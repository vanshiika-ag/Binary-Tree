#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data1):data(data1),left(0),right(0){}
};


//Print vector
void print(vector<int>arr)
{
    for(auto it: arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}

void preorder(Node *root,vector<int>&ans)
{
    if(root==0)
        return;
    ans.push_back(root->data);
    preorder(root->left,ans);
    preorder(root->right,ans);
}
//Pre order function
vector<int> preOrder(Node *root)
{
    vector<int> ans;
    preorder(root,ans);
    return ans;
}

int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    vector<int> ans=preOrder(root);
    print(ans);
}