#include<bits/stdc++.h>
using namespace std;


int main(){
	// Given a array of size n for every i from 0 to  n-1 output the max 
	 
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++)
		cin>>arr[i];
	int mx = INT_MIN;
	for(int i = 0; i<n; i++){
		mx = max(mx, arr[i]);
		cout<<mx<<"\n";
	}


	return 0;
}