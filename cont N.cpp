
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
   // cout<<endl;
    vector<int>v(n);
    //cout<<" Enter elements of the list : ";
    for(auto& a: v)
        cin>>a;


    int mini;

    for(int i=0;i<n-1;i++)
    {
      mini=i;
      for(int j=i+1;j<n;j++)
      {
          if(v[mini]>v[j])
          {
              mini=j;

          }


      }
      if(mini!=i)
      {
          swap(v[mini],v[i]);
           cout<<i<<" "<<mini;
      }
      cout<<endl;
    }


    cout<<endl;
}

