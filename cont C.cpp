//#include <bits/stdc++.h>
//using namespace std;
//
//bool sortBySecond(const pair<string, int> &a, const pair<string, int> &b) {
//    return a.second < b.second;
//}
//
//int main() {
//    int a, b, c;
//    string str;
//    string s,s1,s2;
//    int num;
//    int n;
//    cin >> n;
//
//    vector<pair<string, int>> vp;
//
//    for (int i = 0; i < n; i++) {
//
//        cin >> a >> b >> c;
//        num = (a*3600)+(b*60)+c;
//        s=to_string(a);
//        s1=to_string(b);
//        s2=to_string(c);
//        str=s+" "+s1+" "+s2;
//        vp.push_back({str, num});
//    }
//    sort(vp.begin(), vp.end(), sortBySecond);
//
//
//
//    return 0;
//}
//
//
#include <bits/stdc++.h>
using namespace std;

bool sortBySecond(const pair<string, int> &a, const pair<string, int> &b) {
    return a.second < b.second;
}

int main() {
    int a, b, c;
    string str;
    string s,s1,s2;
    int num;
    int n;
    cin >> n;

    vector<pair<string, int>> vp;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        num = (a * 3600) + (b * 60) + c;
        s = to_string(a);
        s1 = to_string(b);
        s2 = to_string(c);
        str = s + " " + s1 + " " + s2;
        vp.push_back({str, num});
    }
    sort(vp.begin(), vp.end(), sortBySecond);

    // Printing the vector of pairs
    for (auto &p : vp) {
        cout << p.first << endl;
    }

    return 0;
}

