#include<bits/stdc++.h>
using namespace std;

int main(){

    // // apending of string(addition)
    // string s1, s2;
    // s1 = "fam";
    // s2 = "ily";
    // // s1.append(s2);
    // // cout<<s1<<endl;
    // // OR
    // cout<<s1+s2<<endl;

    // // Accessing particular character of a string

    // string s;
    // s = "aditya";
    // cout<<s[2]<<endl;

    // // Clearing the string value
    // s.clear();
    // cout<<s<<endl;

    // // comparing the two string
    // string s1 = "abc";
    // string s2 = "xyz";
    // cout<<s1.compare(s2)<<endl; // 1-->s1 is greater // -1-->s2 is greater // 0--> equal

    // checking the string is empty or not
    // string s1;
    // s1 = "aditya";
    // cout<<s1<<endl;
    // s1.clear();

    // if(s1.empty()){
    //     cout<<"string is empty"<<endl;
    // }

    // Erasing character in a string 
    // string s;
    // s = "adityasingh";
    // s.erase(3, 4); // s.erase(starting index of deleting character, how much character deleted)
    // cout<<s<<endl;
    // return 0;

    // Finding a substring in a string 
    // string s;
    // s = "adityasingh";
    // cout<<s.find("tya")<<endl; // it return the starting index of substring 

    // // inserting in a string 
    // string s;
    // s = "aditya";
    // s.insert(2, "lol"); // it insert lol on index 2
    // cout<<s<<endl;

    // // Length or size of string 
    // string s;
    // s = "aditya";
    // cout<<s.size()<<endl;
    // cout<<s.length()<<endl; // both are same // it use in iterating in for loop
    
    // // getting substring 
    // string s;
    // s = "adityasingh";
    // cout<<s.substr(2,4)<<endl; // from 2 index upto 4 characters

    // Converting string into integer
    // string s ;
    // s = "786";
    // int x = stoi(s);
    // cout<<x+4<<endl;

    // // converting integer into string 
    // int x = 786;
    // string s = to_string(x);
    // cout<<s+"2"<<endl;

    // Sorting in a string 
    string s = "avghashjhjskjdhsahjkkj";
    sort(s.begin(),s.end());
    cout<<s<<endl;



    return 0;
}