#include<iostream>
using namespace std;

int main(){

    // program to check if an alphabet is a vowel or a consonant
    char c;
    cout<<"Enter an alphabet "<<endl;
    cin>>c;
    int lower_case_vowel;
    int upper_case_vowel;

    lower_case_vowel = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    upper_case_vowel = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

    if(lower_case_vowel || upper_case_vowel){
        cout<<c<<" is a vowel "<<endl;
    }
    else{
        cout<<c<<" is a consonant "<<endl;
    }

    return 0;
}