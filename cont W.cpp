#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;

    vector<long long int>v(n);

    for(auto& a : v)
        cin>>a;

    for(long long int i=0;i<n-1;i++)
    {
        for(long long int j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
            }
        }
    }

    for(auto& a: v)
        cout<<a<<" ";

    cout<<endl;
}
