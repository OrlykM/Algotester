#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	if (n >= 0 && n <= 1000 && k >= 0 && k <= 1000)
	{
		cout << fixed << showpoint;
		cout << setprecision(6);
		if (k == 0 || n == 0)
		{
			cout << 0.000000;
			return 0;
		}
		else
		{
			double res = n * k;
			cout << 1. / res;
			return 0;
		}
	}
}
