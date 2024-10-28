
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>odd;
    vector<int>even;
    vector<int>ans;


    for(auto& a: v)
        cin>>a;

    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            even.push_back(v[i]);
        }
        else if(v[i]%2!=0)
        {
            odd.push_back(v[i]);
        }
    }
     for(int i=0;i<even.size()-1;i++)
    {
        for(int j=0;j<even.size()-i-1;j++)
            if(even[j]<even[j+1])
        {
            swap(even[j],even[j+1]);
        }
    }
     for(int i=0;i<odd.size()-1;i++)
    {
        for(int j=0;j<odd.size()-i-1;j++)
            if(odd[j]>odd[j+1])
        {
            swap(odd[j],odd[j+1]);
        }
    }

    for(int i=0;i<odd.size();i++)
    {
        ans.push_back(odd[i]);
    }
    for(int i=0;i<even.size();i++)
    {
        ans.push_back(even[i]);
    }

    for(auto& a : ans)
        cout<<a<<" ";

    cout<<endl;
}
