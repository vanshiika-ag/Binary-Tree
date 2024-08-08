#include<bits/stdc++.h>
using namespace std;

void print(vector<int>arr)
{
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}

float calculate(int x,float y)
{
    return x+y;
}

float calculate(float x,int y)
{
    return x-y;
}

// void update(const int &x)
// {
//     x=10;
// }
int main()
{
    // const int size=4,c=100;
    // vector<int>v(size,5);
    // print(v);

    // for(int i=1;i<=3;i++)
    // {
    //     v.push_back(c+i);
    // }
    // print(v);
    // v.resize(12,99);
    // print(v);
    // v.resize(10);
    // print(v);

    // string s="Programming";
    // s.erase(3,5);
    // s.insert(3,"AB");
    // s.insert(5,"XYZ");
    // cout<<s;

    // int a[]={10,20,30,40,50};

    // for(int i=0;i<1;i++)
    // {
    //     int j=a[i];
    //     replace(a,a+5,j,*(a+4)-i);
    // }

    // for(int i=0;i<5;i++)
    // {
    //     cout<<a[i]<<" ";
    // }

    // char s[12]="ABCDEFGHIJK";
    // stack<char> st1,st2;
    // int i;
    // for(i=0;i<strlen(s)/2;i++)
    //     st1.push(s[i]);
    // for(i=i-1;i<strlen(s);i++)
    //     st2.push(s[i]);
    
    // while(!st1.empty())
    // {
    //     st2.push(st1.top());
    //     st1.pop();
    // }

    
    // while(!st2.empty())
    // {
    //     cout<<st2.top()<<" ";
    //     st2.pop();
    // }

    // int x=10;
    // const int *a=&x;
    // int *const b=&x;
    // int const *c=&x;
    // int const *const d=&x;

    // cout<<*a;

    // int n=5;
    // int *const p=&n;
    // int m=10;
    // p=&m;
    // cout<<*p;

    // const int a=5;
    // int b=15;
    // const int *p=&a;
    // *p=b;
    // p=&b;
    // update(a);
    // update(b);

    // int *ptr=new int(20);
    // cout<<*ptr;
    // free(ptr);

    cout<<calculate(4,5);

}