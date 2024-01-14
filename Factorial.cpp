//Print factorial of a number n using recurrsion 

#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n == 1) return 1;

    return n*fact(n-1);

    // it will goes like first call n * n-1 then n-2 and so on .......
}

int main()
{
    int n;
    cin>>n;

    cout<<fact(n);    
}