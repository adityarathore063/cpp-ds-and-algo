#include<bits/stdc++.h>
using namespace std;

int main(){

    // Find the maximum no of which character are repeated in a string 
    string s;
    s = "aaaddgghjjkkkkkkllllyteywqi";
    int freq[26];
    for(int i = 0; i<26; i++){
        freq[i]=0;
    }

    for(int i = 0; i<s.length(); i++){
        freq[s[i]-'a']++;
    }

    char ans = 'a';
    int maxf = 0;

    for(int i = 0; i<26; i++){
        if(freq[i] > maxf){
            maxf = freq[i];
            ans = i +'a';
        }
    }

    cout<<maxf<<" "<<ans<<endl;

    return 0;
}