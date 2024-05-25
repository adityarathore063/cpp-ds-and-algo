#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Spiral order traversal print
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;
    while (row_start <= row_end && col_start <= col_end)
    {
        // For row start
        for (int i = col_start; i <= col_end; i++)
        {
            cout << arr[row_start][i] << " ";
        }
        cout << endl;
        row_start++;
        // For column end
        if (row_start <= row_end && col_start <= col_end)
        {
            for (int i = row_start; i <= row_end; i++)
            {
                cout << arr[i][col_end] << " ";
            }
            cout << endl;
            col_end--;
        }
        // For row end
        if (row_start <= row_end && col_start <= col_end)
        {
            for (int i = col_end; i >= col_start; i--)
            {
                cout << arr[row_end][i] << " ";
            }
            cout << endl;
            row_end--;
        }
        // For column start
        if (row_start <= row_end && col_start <= col_end)
        {
            for (int i = row_end; i >= row_start; i--)
            {
                cout << arr[i][col_start] << " ";
            }
            cout << endl;
            col_start++;
        }
    }

    return 0;
}