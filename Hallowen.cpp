#include <iostream>
using namespace std;
int main()
{
	int n;
	int k = 0;
	cin >> n;
	if (n >= 1 && n <= 100)
	{
		for (int i = 0; i < n; i++)
		{
			int j;
			cin >> j;
			if (j >= 1 && j <= 100)
			{
				if (j <= 2)
				{
					k++;
				}
				else if(j >= 3 && j <= 7)
				{
					k += 2;
				}
				else if(j >= 8 && j <= 47)
				{
					k += 3;
				}
				else if(j >= 48)
				{
					k += 4;
				}
			}
		}
		cout << k;
		return 0;
	}
}
