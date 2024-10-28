#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.first < b.first);
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>vect;
    vector<int>v1(n);
    vector<int>v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i]>>v2[i];
        vect.push_back(make_pair(v1[i],v2[i]));
    }
    sort(vect.begin(),vect.end(),cmp);
    //cout<<vect[0].first<<" "<<vect[0].second<<endl;
    for(int i=0;i<vect.size();i++)
    {
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
    }
}
