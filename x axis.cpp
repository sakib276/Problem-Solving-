////#include<bits/stdc++.h>
////using namespace std;
////int main()
////{
////    int t;
////    cin>>t;
////    while(t--)
////    {
////        int a,b,c;
////        cin>>a>>b>>c;
////        int d=abs(a-a)+abs(b-a)+abs(c-a);
////        int e=abs(a-b)+abs(b-b)+abs(c-b);
////        int f=abs(a-c)+abs(b-c)+abs(c-c);
////        int minValue = min(d, min(e, f));
////        cout<<minValue <<endl;
////
////    }
////}
//#include <bits/stdc++.h>
//
//
//using namespace std;
//
//
//int main() {
//    int t;
//    cin >> t;
//
//    while (t--) {
//      long long   int n, m;
//        cin >> n >> m;
//
//        vector<vector<long long int>> matrix(n, vector<long long int>(m));
//     long long int minValue;
//        for (long long int i = 0; i < n; ++i) {
//            for (long long int j = 0; j < m; ++j) {
//                cin >> matrix[i][j];
//            }
//        }
//
//
//        for (long long int i = 0; i < n; ++i)
//            {
//            for (long long int j = 0; j < m; ++j)
//             {
//               if(i==0&& j==0)
//               {
//                  if(matrix[i][j]>matrix[i][j+1] && matrix[i+1][j]<matrix[i][j])
//                  {
//                      matrix[i][j] =max(matrix[i][j+1],matrix[i+1][j]);
//                  }
//               }
//               else if(i==0 && j==m-1)
//               {
//                    if(matrix[i][j]>matrix[i][j-1] && matrix[i+1][j]<matrix[i][j])
//                  {
//                      matrix[i][j] =max(matrix[i][j-1],matrix[i+1][j]);
//                  }
//               }
//               else if(i==n-1 && j==0)
//               {
//                     if(matrix[i][j]>matrix[i-1][j] && matrix[i][j+1]<matrix[i][j])
//                  {
//                      matrix[i][j] =max(matrix[i-1][j],matrix[i][j+1]);
//                  }
//               }
//               else if(i==n-1 && j==m-1)
//               {
//                      if(matrix[i][j]>matrix[i][j-1] && matrix[i-1][j]<matrix[i][j])
//                  {
//                      matrix[i][j] =max(matrix[i][j-1],matrix[i-1][j]);
//                  }
//               }
//               else if(j==0  && i!=0 && i!=n-1)
//               {
//                       if(matrix[i][j]>matrix[i-1][j] && matrix[i+1][j]<matrix[i][j] && matrix[i][j+1]<matrix[i][j])
//                  {
//                       minValue = max(matrix[i-1][j], max(matrix[i+1][j], matrix[i][j+1]));
//                      matrix[i][j] =minValue;
//                  }
//               }
//               else if(j==m-1 && i!=0 && i!=n-1)
//               {
//                        if(matrix[i][j]>matrix[i-1][j] && matrix[i+1][j]<matrix[i][j] && matrix[i][j-1]<matrix[i][j])
//                  {
//                      minValue = max(matrix[i-1][j], max(matrix[i+1][j], matrix[i][j-1]));
//                      matrix[i][j] =minValue;
//                  }
//               }
//               else
//               {
//                   if(matrix[i][j]>matrix[i-1][j] && matrix[i+1][j]<matrix[i][j] && matrix[i][j-1]<matrix[i][j] && matrix[i][j+1]<<matrix[i][j] )
//                  {
//                      minValue = max(matrix[i-1][j], max(matrix[i+1][j], matrix[i][j-1]));
//                      long long xy=max(minValue, matrix[i][j+1]);
//                      matrix[i][j] =xy;
//                  }
//               }
//            }
//
//
//
//        }
//         for (long long int i = 0; i < n; ++i) {
//            for (long long int j = 0; j < m; ++j) {
//                cout <<matrix[i][j]<<" ";
//            }
//            cout<<endl;
//        }
//    }
//
//    return 0;
//}
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> matrix(n, vector<int>(m));

        // Read the matrix
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }

        // Process each cell in the matrix
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                // Check neighbors
                int maxValue = matrix[i][j];

                // Check left neighbor
                if (j > 0 && matrix[i][j - 1] > maxValue) {
                    maxValue = matrix[i][j - 1];
                }

                // Check right neighbor
                if (j < m - 1 && matrix[i][j + 1] > maxValue) {
                    maxValue = matrix[i][j + 1];
                }

                // Check top neighbor
                if (i > 0 && matrix[i - 1][j] > maxValue) {
                    maxValue = matrix[i - 1][j];
                }

                // Check bottom neighbor
                if (i < n - 1 && matrix[i + 1][j] > maxValue) {
                    maxValue = matrix[i + 1][j];
                }

                // If the current cell value is greater than all neighbors, stabilize it
                if (matrix[i][j] > maxValue) {
                    matrix[i][j] = maxValue;
                }
            }
        }

        // Output the stabilized matrix
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
