#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    if(n == 0)return ;

    print(n/10);
    cout<<n%10<<" ";
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        if(n == 0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            print(n);cout<<endl;
        }
    }
}