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

void inorder(Node *root,vector<int>&ans)
{
    if(root==0)
        return;
    
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}

//In order function
vector<int> inOrder(Node *root)
{
    vector<int> ans;
    inorder(root,ans);
    return ans;
}

int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->left->right->right=new Node(6);
    vector<int> ans=inOrder(root);
    print(ans);
}