#include <iostream>
using namespace std;

int main()
{

    // write a program to check if a given number is prime or not
    int n;
    cout << "Enter a number " << endl;
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non prime " << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "prime " << endl;
    }

    return 0;
}