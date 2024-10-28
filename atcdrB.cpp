#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int x;
    vector<int>v;
    int tot=n;
    int a,b,c;
    for(int i=0;i<q;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    tot=v[0];
   // cout<<" 3rd Number is : "<<v[3]<<endl;
    for(int i=1;i<q;i++)
    {

        if(tot<=n)
        {
            tot+=v[i];
        }
        else
        {
            tot-=v[i];
        }
    }
    cout<<tot-1<<endl;
}
//30 6
//2 9 18 27 18 9
