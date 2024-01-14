#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[] , int n , int idx)
{
    if(idx == n) return;
    
    cout<<arr[idx]<<endl;

    return printArray(arr , n ,idx + 1 );
}

int main()
{
    int n = 5;
    int arr[5] = {6, 28, 41 , 46 , 70};

    printArray(arr , n , 0);
}