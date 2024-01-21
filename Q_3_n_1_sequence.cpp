#include<bits/stdc++.h>
using namespace std;

int seq(int n , int ans)
{
    if(n == 1) return ans;

  //  cout << n << endl;

    if(n % 2 == 0)
        seq(n / 2 , ans+1);
    else
        seq(3 * n + 1 , ans+1);
}

int main()
{
    int n;
    cin >> n;

    cout<<seq(n , 1)<<endl;

    return 0;
}
