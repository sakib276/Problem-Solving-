#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>v1(n);
        vector<int>v2(n);

        for(auto &a : v1)
            cin>>a;

        for(auto &a : v2)
            cin>>a;

        int cnt=0;

        int num=n;
        int i=0,j=0;

        while(true)
        {
            if(v1[i]>v2[j])
            {
                cnt++;
                j++;
                num--;
            }
            else if(v1[i]<=v2[j])
            {
                i++;
                j++;
                num--;
            }
            if(num==0)
            {
                cout<<cnt<<endl;
                break ;
            }

        }
    }
}
