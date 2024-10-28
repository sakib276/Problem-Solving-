#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int  a,b,c,d,e,f=0;
        cin>>a>>b>>c;

        d=min(a,b);
        e=max(a,b);

        while(d<e)
        {
            d=d+c;
            e=e-c;
            f++;
        }
        cout<<" ans is : "<<f<<endl;
    }
}
