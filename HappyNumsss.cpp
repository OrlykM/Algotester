#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	int flex = 0;
	long long n;
	cin >> n;
	if (n>= 1 && n <= pow(10, 9))
	{
		string str = to_string(n);
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '4' || str[i] == '7')
			{
				flex++;
			}
		}
		cout << flex;
		return 0;
	}
}
