#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
	vector<vector<int>> xy;
	int k;
	cin >> k;
	if (k >= 1 && k <= pow(10, 5))
	{
		for (int i = 0; i < k; i++)
		{
			vector<int> flex;
			int x1, y1, x2, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			if (fabs(x1) >= 0 && fabs(y1) >= 0 && fabs(x2) >= 0 && fabs(y2) >= 0 && fabs(x1) <= 1000 && fabs(y1) <= 1000 && fabs(x2) <= 1000 && fabs(y2) <= 1000)
			{
				flex.push_back(x1); flex.push_back(y1);
				flex.push_back(x2); flex.push_back(y2);
				xy.push_back(flex);
			}
		}
		int h = 0;
		for (int i = 0; i < xy.size(); i++)
		{
			int deltaX, deltaY;
			deltaX = xy[i][2] - xy[i][0];
			deltaY = xy[i][3] - xy[i][1];
			h += sqrt(pow(deltaX, 2) + pow(deltaY, 2));
		}
		cout << h;
		return 0;
	}
}
