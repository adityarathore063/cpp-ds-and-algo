#include<bits/stdc++.h>
using namespace std;

void toh(int n, char src, char dest, char helper){
    if(n==0){
        return;
    }
    toh(n-1, src, helper, dest);
    cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<"\n";
    toh(n-1, helper, dest, src);
}
int main(){

    // Tower of hanoi
    int n;
    cin>>n;
    toh(n, 'A', 'C', 'B');
    return 0;
}