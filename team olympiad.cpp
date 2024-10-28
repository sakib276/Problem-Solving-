#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(auto& a : v)
        cin >> a;

    map<int, int> frequency;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;

    for(int i = 0; i < n; i++)
        {
        frequency[v[i]]++;
        }
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
          {

             v1.push_back(i+1);
          }
          else if(v[i]==3)
          {

              v3.push_back(i+1);
          }
          else if(v[i]==2)
          {

              v2.push_back(i+1);
          }
    }

    int minFreq = INT_MAX;
    int cnt=0;
    int cnt1=0;
    int cnt2=0;
    int minElement;
    for(auto& it : frequency) {
          if(it.first==1)
          {
             cnt++;
             v1.push_back(it.first);
          }
          else if(it.first==3)
          {
              cnt1++;
              v3.push_back(it.first);
          }
          else if(it.first==2)
          {
              cnt2++;
              v2.push_back(it.first);
          }
        if(it.second < minFreq) {
            minFreq = it.second;
            minElement = it.first;
        }

    }
    int tst=0;
    int as=0;
    int s=0,k=0,b=0;
    if(cnt1>0 && cnt>0 && cnt2>0)
    {

    cout<<minFreq<<endl;
 //   sort(v.begin(),v.end());
       for(int i=1;i<=minFreq;i++)
       {
           cout<<v1[s]<<" "<<v2[k]<<" "<<v3[b]<<endl;
           s++;
           k++;
           b++;
       }

    }
    else
    {
        cout<<0<<endl;
    }



    return 0;
}
