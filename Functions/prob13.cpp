#include<bits/stdc++.h>
using namespace std;

void chk_alphabet(char c){
    if(c>='a' && c<='z' || c>='A' && c<='Z'){
        cout<<"Alphabet"<<endl;
    }
    else{
        cout<<"Not Alphabet"<<endl;
    }
}
int main(){

    char c;
    cin>>c;
    chk_alphabet(c);

    return 0;
}