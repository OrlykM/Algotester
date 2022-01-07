#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	string str;
	int n = 0;
	cin >> str;
	if (str.size() >= 1 && str.size() <= pow(10, 3))
	{
		for (int i = 0; i < str.size(); i++)
		{
			if (i != str.size() - 1)
			{
				if (str[i] == str[i+1])
				{
					n++;
				}
			}
		}
		cout << n;
		return 0;
	}
}
