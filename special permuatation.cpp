#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=n;
        for(int i=1;i<=n;)
        {
            if(i!=a)
            {
                cout<<a<<" ";
                i++;
                a--;
            }
            else if(i==a)
            {
                cout<<a-1<<" ";
                cout<<a<<" ";
                a=a-2;
                i=i+2;
            }
        }
        cout<<endl;
    }
}
