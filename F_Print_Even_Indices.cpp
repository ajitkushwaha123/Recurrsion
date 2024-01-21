#include<bits/stdc++.h>
using namespace std;

void printEven(int arr[] , int n , int idx)
{
    if(idx == n)return;

    printEven(arr , n , idx+1);
    if(idx%2 == 0)
    {
        cout<<arr[idx]<<" ";
    }
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

    printEven(arr , n , 0);
}