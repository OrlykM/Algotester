#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	if (n >= 1 && m >= 1 && m <= 100 && n <= 100)
	{
		int res = n * m;
		if (res % 2 == 0)
		{
			cout << "Dragon";
			return 0;
		}
		else
		{
			cout << "Imp";
			return 0;
		}
	}
}
