#include<bits/stdc++.h>
using namespace std;
int main()
{


        int n;
        cin>>n;

        if(n%2==0)
        {
            for(int i=1;i<=n;i++)
            {
                if(i%2==0)
                    cout<<i-1<<endl;
                else
                    cout<<i+1<<endl;
            }
        }
        else
        {
            cout<<"-1"<<endl;
        }

}
