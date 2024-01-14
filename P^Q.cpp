//Need to find Q power of P  using recurrsion 

#include<bits/stdc++.h>
using namespace std;

int ans(int p , int q)
{
    if(q == 1) return p;

    return p*ans(p , q - 1);   
}

int main()
{
    int p , q;
    cin>>p>>q;

    cout<<ans( p , q )<<endl;
}