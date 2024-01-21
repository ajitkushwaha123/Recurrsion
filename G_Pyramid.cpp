#include<bits/stdc++.h>
using namespace std;

void nested(int t)
{
    if(t == 0)return ;

    nested(t-1);
    cout<<"*"; 
}

void space(int q , int idx)
{
    if(q == idx)return ;
    
    space(q , idx+1);
    cout<<"-";
}

void pyramid(int n)
{
    if(n == 0)return ;

    pyramid(n-1);
    nested(2*n - 1);cout<<endl;
}

int main()
{
    int n;
    cin>>n;

    pyramid(n);
}