#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
	long int n, k, p=0;
	cin >> n >> k;
	if (n >= 1 && n <= pow(10, 5) && k >= 1 && k <= pow(10, 9))
	{
		vector<long int> tooths, length;
		for (int i = 0; i < n; i++)
		{
			int ai;
			cin >> ai;
			if (ai >= 1 && ai <= pow(10, 9))
			{
				tooths.push_back(ai);
			}
		}
		for (int i = 0; i < tooths.size(); i++)
		{
			if (tooths[i] >= k)
			{
				p++;
				if (i == tooths.size() - 1)
				{
					length.push_back(p);
				}
			}
			else
			{
				if (p > 0)
				{
					length.push_back(p);
				}
				p = 0;
			}
		}
		for (int i = 0; i < length.size(); i++)
		{
			if (length[i] >= length[0])
			{
				length[0] = length[i];
			}
		}
		cout << length[0];
		return 0;
	}
}
