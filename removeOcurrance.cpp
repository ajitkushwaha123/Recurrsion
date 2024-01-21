#include<bits/stdc++.h>
using namespace std;

void removeOccur(string s , int idx)
{
    if(idx == s.length()) return ;

    if(s[idx] != 'a')cout<<s[idx];
    removeOccur(s , idx + 1);
}

int main()
{
    string s;
    cin>>s;

    removeOccur(s , 0);
}

//  SNEHA VATS <heart> AJIT KUSHWAHA