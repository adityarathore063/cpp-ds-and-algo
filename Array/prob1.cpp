#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Find maximum and minimum element in an array
    int n;
    cin >> n;
    int arr[n];
    int max_ele = INT_MIN;
    int min_ele = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // for(int i = 0; i<n; i++){
    //     if(arr[i]>max_ele){
    //         max_ele = arr[i];
    //     }
    //     if(arr[i]<min_ele){
    //         min_ele=arr[i];
    //     }
    // }
    // Alter of above for above method
    for (int i = 0; i < n; i++)
    {
        max_ele = max(arr[i], max_ele);
        min_ele = min(arr[i], min_ele);
    }
    cout << "Max = " << max_ele << endl;
    cout << "Min = " << min_ele << endl;

    return 0;
}