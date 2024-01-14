#include<bits/stdc++.h>
using namespace std;

int sumOfNaturalNumber(int n)
{
    if(n == 1) return 1;

    return n+sumOfNaturalNumber(n-1);
}

int main()
{
    int n;
    cin>>n;

    cout<<sumOfNaturalNumber(n)<<endl;
}