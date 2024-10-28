#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,c,h;
    cin>>n>>c>>h;

    int t=c+h;
    if(n<=t)
    {
        cout<<n+(n-1)<<endl;
    }
    else
    {
        cout<<t+(t+1)<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
