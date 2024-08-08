#include<bits/stdc++.h>

using namespace std;

class Node{

    public:
    int data;
    Node *left;
    Node *right;

    Node(int data1): data(data1),left(0),right(0){}
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

void rightView(Node *root,int level,vector<int>&ans)
{
    if(root==0)
        return ;
    if(ans.size()==level)
    {
        ans.push_back(root->data);
    }
    rightView(root->right,level+1,ans);
    rightView(root->left,level+1,ans);
}

vector<int>getRightView(Node *root)
{
    vector<int>ans;
    rightView(root,0,ans);
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

    vector<int> ans=getRightView(root);
    print(ans);
}