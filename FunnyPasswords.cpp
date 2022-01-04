#include <iostream>
using namespace std;
int main()
{
    string n;
	string output = "";
	int p = 0;
    cin >> n;
	if (n.length() >= 1 && n.length() <= 10)
	{
		for (int i = 0; i < n.length(); i++)
		{
			if (i % 2 == 0)
			{
				output += n[i / 2];
				p++;
			}
			else
			{
				output += n[n.size()- 1 - i + p];
			}
		}
		cout << output;
		return 0;
	}
}
