#include<bits/stdc++.h>
using namespace std;

void substring(string s, string ans){
    if(s.length()==0){
        cout<<ans<<"\n";
        return;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    substring(ros, ans);
    substring(ros, ans+ch);
    substring(ros, ans+to_string(code));
}

int main(){

    // print all the substring of a string with ASCII code
    string s;
    cin>>s;
    substring(s, "");

    return 0;
}