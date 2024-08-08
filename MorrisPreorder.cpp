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

//Morris Preorder Traversal
vector<int> preOrder(Node *root)
{
    vector<int> ans;

    Node *cur=root;

    while(cur!=0)
    {
        if(cur->left==0)
        {
            ans.push_back(cur->data);
            cur=cur->right;
        }
        else
        {
            Node *temp=cur->left;
            while(temp->right && temp->right!=cur)
            {temp=temp->right;}
            if(temp->right==0)
            {
                temp->right=cur;
                 ans.push_back(cur->data);
                 cur=cur->left;
            }
            else
            {
                temp->right=0;
               
                cur=cur->right;
            }
        }
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
    vector<int> ans=preOrder(root);
    print(ans);
}