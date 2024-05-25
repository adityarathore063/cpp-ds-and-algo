#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Matrix Search(given in sorted order)

    int n, m;
    cin >> n >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[n][m];
        }
    }

    int x;
    cin >> x;

    // Linear search (Brute force approach)
    // bool flag = false;
    // for(int i = 0; i<n; i++){
    //     for(int j =0; j<m; j++){
    //         if(arr[i][j]==x){
    //             flag=true;
    //         }
    //     }
    // }

    // if(flag==true){
    //     cout<<"found"<<endl;
    // }
    // else{
    //     cout<<"Not Found"<<endl;
    // }

    // Optimised Approach

    int r = 0, c = m - 1;
    bool found = false;
    while (r < n and c >= 0)
    {
        if (arr[r][c] == x)
        {
            found = true;
        }
        if (arr[r][c] > x)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found==true)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}