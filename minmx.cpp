#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,y;
        cin>>x>>y;
        int mx=min(x,y);
        int mn=max(x,y);
        cout<<mx<<" "<<mn<<endl;
    }
}
