#include<bits/stdc++.h>
using namespace std;


#define N 3


void swapRows(double mat[N][N+1], int i, int j)
{
    for (int k = 0; k <= N; k++)
    {
        double temp = mat[i][k];
        mat[i][k] = mat[j][k];
        mat[j][k] = temp;
    }
}


int forwardElimination(double mat[N][N+1])
{
    for (int k = 0; k < N; k++)
    {
        int i_max = k;
        int v_max = mat[i_max][k];


        for (int i = k+1; i < N; i++)
            if (abs(mat[i][k]) > v_max)
                v_max = mat[i][k], i_max = i;


        if (!mat[k][i_max])
            return k;


        if (i_max != k)
            swapRows(mat, k, i_max);


        for (int i = k+1; i < N; i++)
        {
            double f = mat[i][k] / mat[k][k];
            for (int j = k+1; j <= N; j++)
                mat[i][j] -= mat[k][j] * f;
            mat[i][k] = 0;
        }
    }
    return -1;
}


void backSubstitution(double mat[N][N+1])
{
    double x[N];
    for (int i = N-1; i >= 0; i--)
    {
        x[i] = mat[i][N];
        for (int j = i+1; j < N; j++)
            x[i] -= mat[i][j] * x[j];
        x[i] = x[i] / mat[i][i];
    }


    cout << " \nSolution for the system:\n ";
    for (int i = 0; i < N; i++)
        cout << x[i] << endl;
}


void gaussianEliminationSolver(double mat[N][N+1])
{
    int singularFlag = forwardElimination(mat);


    if (singularFlag != -1)
    {
        cout << "Singular Matrix." << endl;
        if (mat[singularFlag][N])
            cout << "Inconsistent System." << endl;
        else
            cout << "May have infinitely many solutions." << endl;
        return;
    }


    backSubstitution(mat);
}
int main()
{
    double mat[N][N+1];


    cout << "  Enter coefficients of the system (augmented matrix):\n";
    for (int i = 0; i < N; i++)
    {
        cout << "  Row " << i + 1 << " : ";
        for (int j = 0; j < N + 1; j++)
            cin >> mat[i][j];
    }


    gaussianEliminationSolver(mat);


    return 0;
}
