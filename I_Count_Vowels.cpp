#include<bits/stdc++.h>
using namespace std;

int vowel(string s ,int idx ,int v)
{
    if(idx == s.length()) return v; 

    if(s[idx] == 'u' || s[idx] == 'i' || s[idx] == 'e'
    || s[idx] == 'a' || s[idx] == 'o' ||
    s[idx] == 'U' || s[idx] == 'I' || s[idx] == 'E'
    || s[idx] == 'O' || s[idx] == 'A')
    {
        return vowel(s , idx + 1 , v + 1);
    }
    else
    {
        return vowel(s , idx + 1 , v);
    }
}

int main()
{
    string s;
    getline(cin , s);

    cout<<vowel(s , 0 , 0);
}