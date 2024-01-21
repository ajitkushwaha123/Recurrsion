//Need to find Q power of P  using recurrsion 

#include<bits/stdc++.h>
using namespace std;

int power(int p , int q)
{
    if(q == 0) return 1;

    return p*power(p , q-1);
}

int main()
{
    int p , q;
    cin>>p>>q;

    cout<<power( p , q )<<endl;
}