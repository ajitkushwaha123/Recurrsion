#include<bits/stdc++.h>
using namespace std;

long long avg(long long arr[] , long long n , long long idx)
{
    if(idx == n-1) return arr[idx];

    return arr[idx] + avg(arr , n , idx+1);
}

int main()
{
    long long n;
    cin>>n;

    long long arr[n];

    for(long long i =0; i<n ; i++)
    {
        cin>>arr[i];
    }

    double ans = avg(arr , n , 0);
    ans = ans/n;
    cout << fixed << setprecision(6) << ans;
}