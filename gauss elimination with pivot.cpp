#include<bits/stdc++.h>
using namespace std;

#define EPSILON 1e-10

void swapRows(vector<vector<double>> &matrix, int row1, int row2)
{
    vector<double> temp = matrix[row1];
    matrix[row1] = matrix[row2];
    matrix[row2] = temp;
}

vector<double> gaussEliminationWithPivoting(vector<vector<double>> matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        int maxRow = i;
        for (int j = i + 1; j < n; j++)
        {
            if (abs(matrix[j][i]) > abs(matrix[maxRow][i]))
            {
                maxRow = j;
            }
        }
        if (abs(matrix[maxRow][i]) < EPSILON)
        {
            throw runtime_error(" Singular or nearly singular matrix");
        }
        swapRows(matrix, i, maxRow);
        for (int k = i + 1; k < n; k++)
        {
            double factor = matrix[k][i] / matrix[i][i];
            for (int j = i; j < n + 1; j++)
            {
                matrix[k][j] -= factor * matrix[i][j];
            }
        }
    }
    vector<double> solution(n);
    for (int i = n - 1; i >= 0; i--)
    {
        solution[i] = matrix[i][n];
        for (int j = i + 1; j < n; j++)
        {
            solution[i] -= matrix[i][j] * solution[j];
        }
        solution[i] /= matrix[i][i];
    }
    return solution;
}

int main()
{
    int n;
    cout << "   Enter the number of equations: ";
    cin >> n;
    vector<vector<double>> matrix(n, vector<double>(n + 1));
    cout << "   Enter the augmented matrix coefficients row-wise:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            cin >> matrix[i][j];
        }
    }
    try
    {
        vector<double> solution = gaussEliminationWithPivoting(matrix);
        for (int i = 0; i < n; i++)
        {
            cout << solution[i] << endl;
        }
    }
    catch (const runtime_error &e)
    {
        cerr << " Error: " << e.what() << endl;
    }
    return 0;
}

