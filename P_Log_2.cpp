

// log2(n) = m    2^m == n we have given n in the question 
// need to find m . divide n /2 until n == 1

#include<bits/stdc++.h>
using namespace std;

long long logAjit2(long long n ,long long idx)
{
    if(n == 1) return idx;

    return logAjit2(n/2 , idx + 1);
}

int main()
{
    long long n;
    cin>>n;

    cout<<logAjit2(n , 0)<<endl;
}