#include<bits/stdc++.h>
using namespace std;

int sumOfElementOfArray(int arr[] , int n , int idx)
{
    if(n - 1 == idx)return arr[idx];

    return arr[idx] + sumOfElementOfArray(arr,  n , idx+1);
}

int main()
{
    int  n =5; 
    int arr[5] = {6 ,28 , 41, 46 , 70};

    cout<<sumOfElementOfArray(arr , n  , 0);
}