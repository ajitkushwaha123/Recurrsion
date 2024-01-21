#include<bits/stdc++.h>
using namespace std;

int fact(int n , int r)
{
    if(n == 1 || n == 0)return 1;
    if(n == r) return 1;

    return n*fact(n-1 , r);
}

// int comb(int n , int r)
// {
//     int ans = 0;
//     if(r > n - r) r =  n -r;
//     ans = fact(n  ,r)/fact(n-r  ,r);

//     return ans;
// }

int main()
{
    int n ,  r;
    cin>>n>>r;

    cout<<fact(n,r)<<endl;
}