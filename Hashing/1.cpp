#include <bits/stdc++.h>
using namespace std;

int main()
{
    // count the frequency of elements in an array
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[v[i]]++;
    unordered_map<int, int>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
        cout << itr->first << " " << itr->second << "\n";

    return 0;
}