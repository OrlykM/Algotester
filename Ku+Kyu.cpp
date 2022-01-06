#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	string str, str2;
	string outputStr = "";
	cin >> str >> str2;
	int k = 0;
	int m = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (i != str.size() -1)
		{
			if (str[i] == 'k' && str[i+1] == 'u')
			{
				k += 2;
			}
			else if(str[i] == 'k' && str[i+1] == 'y')
			{
				k += 1;
			}
		}
	}
	for (int i = 0; i < str2.size(); i++)
	{
		if (i != str2.size() - 1)
		{
			if (str2[i] == 'k' && str2[i + 1] == 'u')
			{
				m += 2;
			}
			else if (str2[i] == 'k' && str2[i + 1] == 'y')
			{
				m += 1;
			}
		}
	}
	if (k <= 100 && m <= 100)
	{
		int sum = k + m;
		if (sum % 2 == 0)
		{
			for (int i = 0; i < sum/2; i++)
			{
				outputStr += "ku";
			}
		}
		else
		{
			for (int i = 0; i < (sum-1)/2; i++)
			{
				outputStr += "ku";
			}
			outputStr += "kyu";
		}
		cout << outputStr;
		return 0;
	}
}
