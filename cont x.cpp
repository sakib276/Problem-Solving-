//#include<bits/stdc++.h>
//using namespace std;
//bool sortBySecond(const pair<int, int> &a, const pair<int, int> &b) {
//    return a.second < b.second;
//}
//int main()
//{
//
//      int d,m,y;
//      string name;
//      int num;
//      int n;
//      cin>>n;
//
//      vector<pair<string,int>>vp;
//
//     for (int i = 0; i < n; i++)
//    {
//         cin>>name;
//         cin>>d>>m>>y;
//         num=d+(m*30)+(y*365);
//        vp.push_back({name, num});
//    }
//    sort(vp.begin(), vp.end(), sortBySecond);
//
//    // Highest pair.first
//    cout << "Highest pair.first: " << vp.back().first << endl;
//
//    // Lowest pair.first
//    cout << "Lowest pair.first: " << vp.front().first << endl;
//
//
//}


#include <bits/stdc++.h>
using namespace std;

bool sortBySecond(const pair<string, int> &a, const pair<string, int> &b) {
    return a.second < b.second;
}

int main() {
    int d, m, y;
    string name;
    int num;
    int n;
    cin >> n;

    vector<pair<string, int>> vp;

    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> d >> m >> y;
        num = d + (m * 30) + (y * 365); // calculating total number of days
        vp.push_back({name, num});
    }
    sort(vp.begin(), vp.end(), sortBySecond);

    // Highest pair.first
    cout << "Highest pair.first: " << vp.back().first << endl;

    // Lowest pair.first
    cout << "Lowest pair.first: " << vp.front().first << endl;

    return 0;
}

