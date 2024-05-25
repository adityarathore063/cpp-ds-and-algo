#include <iostream>
using namespace std;
/*  We can use any precision with the help of cpp_int data type if we
    are not sure about how much precision is needed in future. It automatically
    converts the desired precision at the Run-time. 
    #include <boost/multiprecision/cpp_int.hpp>
    using namespace boost::multiprecision;
    cpp_int factorial = 1;
*/
int main()
{

    // Write a program to find the factorial of a given number
    int n;
    cin >> n;
    unsigned long long int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    cout << factorial << endl;

    return 0;
}