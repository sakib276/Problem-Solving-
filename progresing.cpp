#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;

int lis(vector<pair<int,int>> const& a)
{
    int n = a.size();
    const int INF = 1e5;
    vector<pair<int,int>> d(n+1, {INF,INF});
    //cout<<d[1].first<<" "<<d[1].second<<"\n";
    d[0] = {-INF,-INF};

    for (int i = 0; i < n; i++)
    {
        int l;// = upper_bound(d.begin(), d.end(), a[i]) - d.begin();

        int L=0,R=n;
        while(L<=R){
            int m=(L+R)/2;

            if(a[i].first<d[m].first&&a[i].second<d[m].second){
                R=m-1;
                l=m;
            }
            else{
                L=m+1;
            }
        }
        //cout<<i<<" "<<l<<"\n";
        if (d[l-1].ff <= a[i].ff&& d[l-1].ss <= a[i].ss&& d[l].ff >= a[i].ff&& d[l].ss >= a[i].ss)
            d[l] = a[i];
    }
    int ans = 0;
    for (int l = 0; l <= n; l++)
    {
        if (d[l] < (make_pair(INF,INF)))
            ans = l;
    }
    return ans;
}


int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            v.push_back({x,y});
        }
        cout<<lis(v)<<"\n";
    }

}
