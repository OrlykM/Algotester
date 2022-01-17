#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n >= 1 && n <= 1000)
	{
		int output = 0;
		for (int i = n; i >= 1; i--)
		{
			if (i == n)
			{
				output += 1;
			}
			else if (i == 1)
			{
				output += n * n;
			}
			else
			{
				output += i * i;
			}
		}
		cout << output;
		return 0;
	}
}
