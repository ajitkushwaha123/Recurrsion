//Find max element in the array :) 

#include<bits/stdc++.h>
using namespace std;

int maxElement(int arr[] , int n , int idx)
{
    if(n-1 == idx) return arr[idx];

    return max(arr[idx] , maxElement(arr , n , idx + 1));
}

int main()
{
    int n = 5;
    int arr[5] = {6 , 28 , 96 , 46 , 70};

    cout<<maxElement(arr , n , 0 )<<endl;
}