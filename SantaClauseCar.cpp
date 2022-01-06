#include <iostream>
#include <iomanip>
#include <math.h>
#define pi 3.141592653
using namespace std;
int main()
{
	double price;
	double k, r;
	cin >> price >> k >> r;
	if (price >= 0 && price <= 1000 && k >= 1 && k <= 1000 && r >= 0 && r<= 1000)
	{
		cout << fixed << showpoint;
		cout << setprecision(7);
		long double res = 2*pi * r *k * price;
		cout << res;
		return 0;
	}
}
