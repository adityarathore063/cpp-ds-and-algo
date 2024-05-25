#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Largest word in a sentence
    int n;
    cin >> n;
    cin.ignore();

    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int cur_len = 0;
    int max_len = 0;
    int i = 0;
    int st = 0, maxst = 0;
    while (i<n)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (cur_len > max_len)
            {
                max_len = cur_len;
                maxst = st;
            }
            cur_len = 0;
            st = i+1;
        }
        else
        {
            cur_len++;
            if (arr[i] == '\0')
            {
                break;
            }
        }
        i++;
    }

    cout << max_len << endl;
    for(int i = 0; i<max_len; i++){
        cout<<arr[i+maxst];
    }
    return 0;
}