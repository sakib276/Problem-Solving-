//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//
//    vector<int>v(n);
//    for(auto& a : v)
//        cin>>a;
//
//    pair<int,int>pa;
//
//     for(int i=0;i<n;i++)
//    {
//         pa.first = v[i];
//         pa.second = v[i]%10;
//    }
//
//
//  //  vector<pair<int, int>> vp;
//
//
//    vp.push_back(pa);
//
//
////    sort(vp.begin(), vp.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
////        return a.second < b.second;
////    });
//
//    // Printing the sorted vector
////    for (const auto &p : vp) {
////        cout << "(" << p.first << ", " << p.second << ") ";
////    }
////    cout << endl;
//
//
//
//
//
//}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> vp;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        vp.push_back({num, num % 10});
    }

    sort(vp.begin(), vp.end(), [](const pair<int, int> &a, const pair<int, int> &b)
    {
        if (a.second != b.second)
            return a.second < b.second;
        return a.first < b.first;
    });


    for ( auto &p : vp)
    {
        cout << p.first << " ";
    }
    cout << endl;

    return 0;
}
