#include<bits/stdc++.h>
using namespace std;

int main() {
	// print all the subarray of a given array
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}

	for(int i = 0; i<n; i++){
		for(int j = i; j<n; j++){
			for(int k = i; k<=j; k++){
				cout<<arr[k]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}