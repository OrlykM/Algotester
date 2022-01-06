#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long n;
	cin >> n;
	if (n >= 1 && n <= pow(10, 9))
	{
		int k = 11;
		int j = ceil(n / 60.);
		for (int i = 1; i <= j; i++)
		{
			if (i <= 7)
			{
				k += 9;
			}
			else
			{
				k += 5;
			}
		}
		cout << k;
		return 0;
	}
}
