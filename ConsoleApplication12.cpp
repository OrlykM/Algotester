#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n >= 2 && n <= 100000)
	{
		int scope = n - 2;
		int current = 0;
		int p = 0;
		vector<int> positions;
		for (int i = 0; i < n ; i++)
		{
			int k;
			cin >> k;
			positions.push_back(k);
		}
		sort(positions.begin(), positions.end());
		while (p != positions.size())
		{
			if (p != 0 && p != positions.size() - 1)
			{
				if (positions[p] - positions[p-1] == positions[p + 1] - positions[p])
				{
					current++;
					positions.erase(positions.begin() + p);
					p = 0;
				}
			}
			if (p == positions.size() - 1)
			{
				break;
			}
			p++;
		}
		if (current == scope)
		{ 
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
		return 0; 
	}
}