#include<bits/stdc++.h>
using namespace std;
#define debug(arg) //cout << #arg << " = " << arg << endl;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n;
        cin>>n;
        debug(n)

       long long int b,c,d,e;
        long long int m1,m2;
        vector<long long int>v1(n);
        vector<long long int>v2(n);

        for(auto &a : v1)
            cin>>a;

        for(auto &a : v2)
            cin>>a;

        m1 = *min_element(v1.begin(), v1.end());
        m2 = *min_element(v2.begin(), v2.end());

           long long  int cnt=0;


           for(int i=0;i<n;i++)
           {

              b=(v1[i]-m1);
              c=(v2[i]-m2);

              debug(b)
              debug(c)
              d=min(b,c);
              if(b>c)
              {
                  cnt=cnt+d;
                  b=b-c;
                  cnt=cnt+b;
              }
              else if(b<c)
              {
                  cnt=cnt+d;
                  c=c-b;
                  cnt=cnt+c;
              }
              else if(b==c)
              {
                  cnt=cnt+d;
              }
           }
           cout<<cnt<<endl;

    }
}
