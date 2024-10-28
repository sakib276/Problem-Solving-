
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
    auto k=v.begin();
    int test=v[0];
    for(int i=0;i<n-1;i++)
    {
        //if(v[0])
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
      }
       auto it = find(v.begin(), v.end(), test);
    if(k!=it)
      {
          k=it;
          cnt++;

      }
    }

 cout<<cnt<<endl;

}

