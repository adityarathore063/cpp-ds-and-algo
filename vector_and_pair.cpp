#include<bits/stdc++.h>
using namespace std;

bool mycompare(pair<int, int> p1, pair<int, int> p2){
    return p1.first<p2.first;
}
int main(){

    // Declare a 2d vector of size n x m and initialize with -1
    int n, m;
    vector<vector<int>> grid(n, vector<int>(m, -1));
    // custom comparators
    int arr[n];
    vector<pair<int, int>>v;
    for(int i = 0; i<n; i++){
        v.push_back(make_pair(arr[i], i));
    }
    sort(v.begin(), v.end(),mycompare);
    // To convert the vector into a prefix sum vector 
    partial_sum(v.begin(), v.end(), v.begin());
    return 0;
}