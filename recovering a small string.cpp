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
        int a,b,c,d;
        int s=3;
        char f;

        vector<char>v;

        if(n>26)
        {
            if(n==27 )
            {
                cout<<"aay"<<endl;
            }
            else if( n==28)
            {
                cout<<"aaz"<<endl;
            }
            else if( n==29)
            {
                cout<<"abz"<<endl;

            }
            else{
           while(n>26)
           {
               v.push_back('z');
               n=n-26;
               s--;
           }
           if(s==2)
           {
               v.push_back('a');
               n=n-1;
               f='a'+n-1;
               v.push_back(f);
           }
           else if(s==1)
           {
               f='a'+n-1;
               v.push_back(f);
           }
           sort(v.begin(),v.end());
           for(auto & k : v)
            cout<<k;

           cout<<endl;
        }
        }
        else
        {
            v.push_back('a');
            v.push_back('a');
            n=n-2;

            f='a'+n-1;
            v.push_back(f);
            sort(v.begin(),v.end());
            for(auto & k : v)
                cout<<k;

            cout<<endl;
        }
    }
}
