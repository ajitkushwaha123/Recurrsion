#include<bits/stdc++.h>
using namespace std;

int palindrome(int arr[] ,int n ,int i , int j)
{
    if(i == n-1) return 1;

    if(arr[i] != arr[j]) return 0;
    return palindrome(arr , n , i+1 , j-1);
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i =0; i<n ; i++)
    {
        cin>>arr[i];
    }

  //  cout<<palindrome(arr , n , 0 , n-1)<<endl;

     if(palindrome(arr, n , 0 , n-1))cout<<"YES"<<endl;
     else
     {
        cout<<"NO"<<endl;
     }
}