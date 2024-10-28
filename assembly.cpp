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
        vector<int>v(n-1);

        for(auto& a : v)
            cin>>a;

        vector<int>ans;

        int s=501;
        cout<<501<<" ";
        for(auto a : v)
        {
            s=s+a;
            ans.push_back(s);
        }

        for(auto &a : ans)
            cout<<a<<" ";

        cout<<endl;
    }
}
