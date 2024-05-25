#include <iostream>
using namespace std;

int main()
{

    // Program to find sum of natural numbers till n.
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "The sum is " << sum << endl;

    return 0;
}