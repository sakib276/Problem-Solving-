

#include<bits/stdc++.h>
using namespace std;

int main ()
{

    int n;
    vector<int>v;
    while(cin>>n)
    {
        v.push_back(n);
        int l=v.size();
        if(l==1)
        {
            cout<<v[0]<<endl;
        }
        else if(l==2)
        {
            cout<<(v[0]+v[1])/2<<endl;
        }
        else
        {   sort(v.begin(),v.end());
            if(l%2!=0)
            {
                cout<<v[l/2]<<endl;
            }
            else
            {
                cout<<(v[l/2]+v[l/2-1])/2<<endl;
            }
        }
    }

  return 0;
}
