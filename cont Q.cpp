#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;

    vector<int> vec(n);

    for(auto& a: vec)
        cin>>a;

         sort(vec.begin(),vec.end());
    int r=0,l=0;
    int mxc=0;
    while(l<n)
    {
        if(vec[l]-vec[r]<=1)
        {
            mxc=max(mxc,l-r+1);

            l++;
        }
        else
        {
            r++;
        }
    }
    cout<<mxc<<endl;
    }
    return 0;
}
