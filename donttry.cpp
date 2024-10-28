//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        int n,m;
//        cin>>n>>m;
//        string s1,s2;
//        cin>>s1>>s2;
//        int cnt=0;
//        int sz1=s1.size();
//        int sz2=s2.size();
//        bool flag=false ;
//
//        if(sz1>sz2)
//        {
//            cout<<0<<endl;
//        }
//        else
//        {
//            while(sz1<sz2)
//            {
//
//                s1=s1+s1;
//                 size_t found = s2.find(s1);
//                if (found != string::npos)
//                {
//                    cnt++;
//                    flag=true;
//                    break;
//                }
//                else
//                {
//                   cnt++;
//                }
//            }
//        }
//
//       if(flag)
//       {
//        cout<<" ans is : "<<cnt<<endl;
//       }
//       else
//       {
//        cout<<" ans is : "<<-1<<endl;
//       }
//    }
//}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        int cnt = 0;
        int sz1 = s1.size();
        int sz2 = s2.size();
        bool flag = false;

        if (sz1 > sz2) {
            cout << 0 << endl;
        } else {
            while (sz1 < sz2) {
                s1 = s1 + s1;
                sz1 = s1.size(); // Update sz1 after concatenation
                size_t found = s2.find(s1);
                if (found != string::npos) {
                    cnt++;
                    flag = true;
                    break;
                } else {
                    cnt++;
                }
            }
        }

        if (flag) {
            cout << "ans is : " << cnt << endl;
        } else {
            cout << "ans is : " << -1 << endl;
        }
    }
    return 0;
}
