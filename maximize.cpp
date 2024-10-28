//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
////        int n;
////        cin>>n;
//
//        int a= __gcd(6,4);
//        int ans=a;
//        cout<<ans<<endl;
//    }
//}
#include <bits/stdc++.h>
using namespace std;

//int gcd(int a, int b) {
//    if (b == 0)
//        return a;
//    return gcd(b, a % b);
//}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int y = x - 1;
        int p= __gcd(x, y);
        while (p != 1) {
            y--;
         p= __gcd(x, y);
        }
        cout << "ans is : "<<y << endl;
    }
    return 0;
}
