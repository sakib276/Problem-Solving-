

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;

    vector<int>v(n);

    for(auto& a: v)
        cin>>a;


    int mini;
    int cnt=0;

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
          cnt++;
          swap(v[mini],v[i]);
      }
    }
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
        cout<<cnt<<endl;
}

