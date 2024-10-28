////IN THE NAME OF ALLAH
//#include<bits/stdc++.h>
//using namespace std;
//#define fast                \
//    ios_base::sync_with_stdio(0); \
//    cin.tie(0);
//#define endl '\n'
//#define int long long
//#define M = 1e18
//
//void solve(){
//    int a, b, c;
//    cin>>a>>b>>c;
//
//    int mx = a + b;
//    if(max({a, b, c})==a){
//            if(a==0)cout<<0<<endl;
//            else cout<<-1<<endl;
//    }else {
//        if(a==b){
//            if(c%2==0)cout<<a+b<<endl;
//            else cout<<-1<<endl;
//        }else if(a+b>c)cout<<c+(b-a)<<endl;
//        else cout<<max(a+b, c)<<endl;
//    }
//}
//
//signed main()
//{
//  fast
//  int tc= 1;
//  cin>>tc;
//  while(tc--) solve();
//  return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
       // int total=a+b+c;
        if((a+b+c)%2==0)
        {

            if(a+b<=c)
            {
                cout<<a+b<<endl;

            }
            else
            {

                cout<<(a+b+c)/2<<endl;

            }
        }
        else{
        cout<<-1<<endl;
        }


    }
}
