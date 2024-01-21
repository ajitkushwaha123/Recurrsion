#include<bits/stdc++.h>
using namespace std;

int printMax( int arr[] , int n , int idx)
{
    if(idx == n - 1) return arr[idx];

    return max(arr[idx] , printMax(arr , n , idx + 1));
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i= 0; i<n ; i++)
    {
        cin>>arr[i];
    }

    cout<<printMax(arr , n , 0)<<endl;
}