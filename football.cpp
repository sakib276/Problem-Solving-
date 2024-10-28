#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>v(n);

    for(auto &a : v)
        cin>>a;

     map<string, int> freq;

     for(int i=0;i<n ;i++)
     {
         freq[v[i]]++;
     }

     int mx=0;
     string ans;
     for (const auto& pair : freq) {
       /// cout << pair.first << ": " << pair.second << endl;
        if(pair.second>mx)
        {
           // cout<<" fk you "<<endl;
            mx=pair.second;
            ans=pair.first;
        }
    }
    cout<<" ans is : "<<ans<<endl;
    //sort(freq.begin(),freq.end());

}
