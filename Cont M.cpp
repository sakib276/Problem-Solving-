
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

    vector<int>v(n);
    for(auto& a: v)
        cin>>a;

    int key;
    int j;
    for(int i=1;i<n;i++)
    {
        key=v[i];
        j=i-1;
        while(j>=0 && v[j]>key)
        {
            v[j+1]=v[j];
            j=j-1;
        }
        v[j+1]=key;
        cout<<j+1<<" ";
    }
    cout<<endl;
    }
}

