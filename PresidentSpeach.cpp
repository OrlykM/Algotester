#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
	int n;
	string str, str2;
	cin >> n >> str;
	cin.ignore();
	getline(cin, str2);
	if (n >= 1 && n <= 10 && str.length() <= 10)
	{		
		int m = 0;
		string word;
		stringstream ss(str2);
		while (ss >> word)
		{
			if (word == str)
			{
				m++;
			}
		}
		if (m == n)
		{
			cout << "YES";
			return 0;
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}
}
