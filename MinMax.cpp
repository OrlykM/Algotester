#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	string n, min, max;
	cin >> n;
	for (int i = 0; i < n.length(); i++)
	{
		if (i == 0)
		{
			if (n[i] == '*')
			{
				min += '1';
				max += '9';
			}
			else
			{
				min += n[i];
				max += n[i];
			}
		}
		else
		{
			if (n[i] == '*')
			{
				min += '0';
				max += '9';
			}
			else
			{
				min += n[i];
				max += n[i];
			}
		}
	}
	cout << min << " " << max;
	return 0;
}
