#include<bits/stdc++.h>
using namespace std;
int main()
{

        int n;
        cin>>n;
        string str;
        cin>>str;

        map<string,int>vp;
        string substring;
        int mx=0;
        string ans;
        for(int i=0; i<n-1; i++)
        {
            substring = str.substr(i, 2);
            vp[substring]++;
        }

        for (const auto& pair : vp)
        {
          if(mx<pair.second)
           {
               mx=pair.second;
               ans=pair.first;
           }
        }
        cout<<ans<<endl;

}
