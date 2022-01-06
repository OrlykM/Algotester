#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
	long long n;
	string m = "";
	cin >> n;
	if (n >= 1 && n <= pow(10, 9))
	{
		string Value = to_string(n);
		for (int i = 0; i < Value.length(); i++)
		{
			if (Value[i] == '7' || Value[i] == '4')
			{
				m += Value[i];
			}
		}
		if (m.length() >= 1)
		{
			cout << m;
			return 0;
		}
		else
		{
			cout << "No luck";
			return 0;
		}
	}
}
