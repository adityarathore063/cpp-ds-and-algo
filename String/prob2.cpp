#include<bits/stdc++.h>
using namespace std;

int main(){

    // convert the given integer string into maximum number
    string s;
    s = "12345";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;
    

    return 0;
}