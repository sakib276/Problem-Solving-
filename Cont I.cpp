
#include<bits/stdc++.h>
using namespace std;

int main ()
{

    long int i,n,a;
    while(true)
    {
        cin>>n;
        if(n==0)
            break;

           vector<int>v(n);
        for(auto& k : v)
        {
           cin>>k;
        }

        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {

            if(i!=n-1)
            {
                cout<<v[i]<<" ";
            }
            else
            {
                cout<<v[i]<<endl;
            }
        }


        cout<<endl;
    }

  return 0;
}
