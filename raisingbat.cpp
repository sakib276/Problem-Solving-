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
        int x;
        vector<int>v;
        int cnt=0;
        int sum=0;
        int test;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x==0)
            {
                cnt++;
                x=x+1;
            }
            v.push_back(x);
            sum=sum+x;
        }
        if(sum!=0)
        {
            cout<<" ans is : "<<cnt<<endl;
        }
        else
        {
          test=0-(sum);
          cnt=cnt+test;

          cout<<" ans is : "<<cnt+1<<endl;
        }

    }
}
