#include<bits/stdc++.h>
using namespace std;

int minElement(int arr[] , int n , int idx)
{
    if(n - 1 == idx)return arr[idx];

    return min(arr[idx] , minElement(arr , n , idx + 1));
}

int main()
{
    int n = 5; 
    int arr[5] = {6, 28  , 41 , 46, 70};

    cout<<minElement(arr , n , 0);
}