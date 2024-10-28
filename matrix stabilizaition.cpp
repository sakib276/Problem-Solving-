
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
       long long  int n, m;
        cin >> n >> m;

        //vector<vector<long long int>> matrix(n, vector<long long int>(m));
        long long int matrix[n+2][m+2];
   for ( long long int i = 0; i < n+2; i++) {
            for (long long int j = 0; j < m+2; j++) {
                matrix[i][j]=0;

            }
        }

        for ( long long int i = 1; i <= n; ++i) {
            for (long long int j = 1; j <= m; ++j) {
                cin >> matrix[i][j];

            }
        }

        long long int now,l,r,u,d;
        for(long long int i=1;i<=n;i++)
        {
            for(long long int j=1;j<=m;j++)
            {
                now= matrix[i][j];
                u= matrix[i-1][j];
                d= matrix[i+1][j];
                r=matrix[i][j+1];
                l=matrix[i][j-1];

                if(now>l and now>r and now>u and now>d)
                {
                    matrix[i][j]= max({l,r,u,d});
                }
            }
        }
        for (long long int i = 1; i <= n; ++i) {
            for (long long int j = 1; j <= m; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
