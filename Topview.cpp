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


//print the vector
void print(vector<int> arr)
{
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}


vector<int> getTopView(Node *root)
{
    vector<int> ans;
    if(root==0)
        return ans;
    
    map<int ,int>mpp;
    queue<pair<Node*,int>> q;

    q.push({root,0});
    while(!q.empty())
    {
        auto it=q.front();
        q.pop();
        Node *temp=it.first;
        int line=it.second;

        if(mpp.find(line)==mpp.end())
            mpp[line]=temp->data;
        
        if(temp->left)
            q.push({temp->left,line-1});
        if(temp->right)
            q.push({temp->right,line+1});
    }

    for(auto it:mpp)
    {
        ans.push_back(it.second);
    }

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

    vector<int>ans=getTopView(root);
    print(ans);
}