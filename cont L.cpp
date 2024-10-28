#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int cnt=0;
        cin>>n;
        vector<int>v(n);

        for(auto& a: v)
            cin>>a;

        for(int i=0; i<v.size()-1; i++)
        {
            for(int j=0; j<v.size()-i-1; j++)
                if(v[j]>v[j+1])
                {
                    swap(v[j],v[j+1]);
                    cnt++;
                }
        }
        cout<<cnt<<endl;
    }
}
