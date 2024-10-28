#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n==m)
        {
            cout<<"YES"<<endl;
        }
        else if(n<m)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int c=abs(n-m);
            if(c%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
