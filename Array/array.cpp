#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Declaration of array
    // int array[3];
    // array[0] = 29;
    // array[1] = 27;
    // array[2] = 18;
    // cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<endl;
    // // another type of declaration
    // int arr[3] = {29, 27, 18};
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    // taking input in array and output in array
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}