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

        vector<int> v(n), presum(n);
        for (auto &it : v) cin >> it;


       map<int, int> freq, m;
       for (int i = 0; i < n; i++) {
            freq[v[i]]++;
       }

       if(freq[1] == n) {
            cout << 1 << endl;
       }
       else {

       int ans = -1, flag = 0;
       for (int i = 0; i < n - 1; i++) {
            m[v[i]]++;

            int left_two = m[2];
            int right_two = freq[2] - left_two;

            if(left_two == right_two) {
                ans = i + 1;
                flag++;
                break;
            }
       }

       if (ans == -1) cout << "-1" << endl;
       else cout << ans << endl;
       }
    }
}
