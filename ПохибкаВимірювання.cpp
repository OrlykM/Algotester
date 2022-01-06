#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	long long v;
	cin >> v;
	if (v >= 1 && v <= pow(10, 9))
	{
		cout << fixed << showpoint;
		double t = 225000000. / v;
		cout << t;
		return 0;
	}
}
