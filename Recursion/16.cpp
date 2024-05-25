#include<bits/stdc++.h>
using namespace std;

void permute(string s, string ans){
    if(s.length()==0){
        cout<<ans<<"\n";
        return;
    }
    for(int i = 0; i<s.size(); i++){
        char ch = s[i];
        string ros = s.substr(0,i) + s.substr(i+1);
        permute(ros, ans+ch);
    }
}
int main(){

    // Find the all permutation of a string
    string s;
    cin>>s;
    permute(s,"");
    return 0;
}