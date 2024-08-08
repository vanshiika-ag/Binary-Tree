#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data1):data(data1),left(0),right(0){}
};

//print thr vector
void print(vector<int>ans)
{
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}

vector<int> postOrder(Node *root)
{
    vector<int> ans;
    Node *cur=root;

    while(cur!=0)
    {
        if(cur->right==0)
        {
            ans.push_back(cur->data);
            cur=cur->left;
        }
        else
        {
            Node *temp=cur->right;
            while(temp->left && temp->left!=cur)
            {
                temp=temp->left;
            }
            if(temp->left==0)
            {
                ans.push_back(cur->data);
                temp->left=cur;
                cur=cur->right;
            }
            else
            {
                temp->left=0;
                cur=cur->left;
            }
        }

    }
    // print(ans);
    reverse(ans.begin(),ans.end());
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

    vector<int> ans=postOrder(root);
    print(ans);
}