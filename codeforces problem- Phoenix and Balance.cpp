#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,sum=0;
        cin>>n;
        for(int i=1;i<=n/2;i++)
        {
            sum=sum+pow(2,i);
        }
        cout<<sum<<endl;

    }
}
