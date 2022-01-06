#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
	long long x1, y1, x2, y2;
	int Step = 0;
	cin >> x1 >> y1 >> x2 >> y2;
	if (x1 >= 0 && y1 >= 0 && x2 >= 0 && y2 >= 0 && x1 <= pow(10, 9) && y1 <= pow(10, 9)&& x2 <= pow(10, 9)&& y2 <= pow(10, 9))
	{
		while (x1 != x2)
		{
			if (x1 < x2)
			{
				x1++;
				Step++;
			}
			else if (x1 > x2)
			{
				x1--;
				Step++;
			}
		}
		while (y1 != y2)
		{
			if (y1 < y2)
			{
				y1++;
				Step++;
			}
			else if (y1 > y2)
			{
				y1--;
				Step++;
			}
		}
		cout << Step;
		return 0;
	}
}
