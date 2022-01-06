#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
	signed int n, m=0;
	cin >> n;
	if (n >= 1 && n <= 7)
	{
		vector<int> marks;
		for (int i = 0; i < n; i++)
		{
			
			signed int mark;
			cin >> mark;
			if (mark>= 0 && mark <= 100)
			{
				marks.push_back(mark);
			}
		}
		for (int i = 0; i < marks.size(); i++)
		{
			if (marks[i] < 51)
			{
				cout << "Zabud pro stypendiiu";
				return 0;
			}
			else if (marks[i] >= 90)
			{
				m++;
			}
		}
		if (m == n)
		{
			cout << "Pidvyshchena";
			return 0;
		}
		else
		{
			cout << "Zvychaina";
			return 0;
		}
	}
}
