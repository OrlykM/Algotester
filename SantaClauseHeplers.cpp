#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n >= 1 && n <= 1000)
	{
		vector<int> start, end;
		for (int i = 0; i < n; i++)
		{
			int k;
			cin >> k;
			start.push_back(k);
		}
		for (int i = 0; i < n; i++)
		{
			int m;
			cin >> m;
			end.push_back(m);
		}
		for (int i = 0; i < start.size()/2; i++)
		{
			int temp = start[i];
			start[i] = start[start.size() - 1 - i];
			start[start.size() - 1 - i] = temp;
		}
		if (start == end)
		{
			cout << "Yes";
			return 0;
		}
		else
		{
			cout << "No" <<endl;
			for (int i = 0; i < start.size(); i++)
			{
				cout << start[i] << " ";
			}
			return 0;
		}
	}
}
