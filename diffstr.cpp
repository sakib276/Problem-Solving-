#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int n = str.size();
        int cnt=0;
        map<string, int> frequency;

        for (int i = 0; i < n; i++) {
            string substr = str.substr(i, 1);
            frequency[substr]++;
        }

        for (auto &pair : frequency) {

            if(pair.second>0)
            {
                cnt++;
            }
        }

        if(cnt==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<str[n-1];
            for(int i=0;i<n-1;i++)
            {
                cout<<str[i];
            }
            cout<<endl;
        }
    }
    return 0;
}
