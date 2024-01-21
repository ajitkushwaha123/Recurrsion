#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
        long long a,b,n;
        cin>>a>>b>>n;

        vector<long long> p;
        vector<long long> q;
        for(long long i=0; i<n ;i++)
        {
            long long x;
            cin>>x;

            p.push_back(x);
        }

        long long count = 0;

        for(long long i=0; i<n ;i++)
        {
            long long y;
            cin>>y;

            q.push_back(y);
        }

        for(long long i=0; i<n ; i++)
        {
            if(b < q[i])count++ ; break;
            if(b <= 0)break;
            long long turns = 0;
            turns = q[i]/a;
            if(q[i] % a != 0)
            {
                turns += 1;
            }

            long long loss = p[i]*turns;

            b -= loss;
           q[i] = 0;

            cout<<b<<" "<<q[i]<<endl;
        }

        long long sum = 0 ;

        for(long long i =0; i<q.size() ; i++)
        {
            sum += q[i];
        }

        if(sum <= 0 || b >= 1 && count == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}