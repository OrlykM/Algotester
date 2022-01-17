#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	if (n >= 0 && m >= 0 && n <= 777  && m <= 777)
	{
		vector<string> inTotal;
		for (int i = 0; i < n+m; i++)
		{
			string str;
			cin >> str;
			if (str.size() >= 1 && str.size() <= 7)
			{
				inTotal.push_back(str);
			}
		}
		sort(inTotal.begin(), inTotal.end());
		inTotal.erase(unique(inTotal.begin(), inTotal.end()), inTotal.end());
		cout << inTotal.size();
		return 0;
	}
}
