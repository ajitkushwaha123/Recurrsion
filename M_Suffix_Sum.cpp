#include<bits/stdc++.h>
using namespace std;

long long sum( long long arr[] ,long long n , long long m)
{
    if(n-1 == m) return arr[m];

    return arr[m] + sum(arr , n , m+1);
}

int main()
{
    long long n,m;
    cin>>n>>m;

    long long arr[n];

    for(long long i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }

    m = n -m;

    cout<<sum(arr , n , m);
}