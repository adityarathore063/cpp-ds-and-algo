#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	while (t--)
	{
		int D, d, A, B, C;
		cin >> D >> d >> A >> B >> C;
		int a = 10;
		int b = 21;
		int c = 42;
		int total_dist = D * d;
		if (total_dist >= c)
		{
			cout << C << endl;
		}
		else if (total_dist < c && total_dist >= b)
		{
			cout << B << endl;
		}
		else if (total_dist < b && total_dist >= a)
		{
			cout << A << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}
	return 0;
}