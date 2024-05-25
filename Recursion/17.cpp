#include<bits/stdc++.h>
using namespace std;

int countOfDigits(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count = 0;
    for(int i = 1; i<=6; i++){
        count+=countOfDigits(s+i, e);
    }
    return count;
}
int main(){

    // Count the number of paths possible from starting point to end point in gameboard(steps depend on dice value i.e 1 to 6)
    int s,e;
    cin>>s>>e;
    cout<<countOfDigits(s,e)<<"\n";
    return 0;
}