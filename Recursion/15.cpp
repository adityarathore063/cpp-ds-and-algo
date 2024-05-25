#include<bits/stdc++.h>
using namespace std;

string arr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string ans){
    if(s.length()==0){
        cout<<ans<<"\n";
        return;
    }
    char ch = s[0];
    string code = arr[ch-'0'];
    string ros = s.substr(1);

    for(int i = 0; i<code.length(); i++){
        keypad(ros, ans + code[i]);
    }
}
int main(){

    // print all possible words from phone digits
    keypad("23", "");
    return 0;
}