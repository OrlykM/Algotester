#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
	int n, repeat=0;
	cin >> n;
	if (n >= 1 && n <= pow(10, 5))
	{
		vector<int> nums;
		for (int i = 0; i < n; i++)
		{
			int k;
			cin >> k;
			if (k >= 1 && k <= pow(10, 9))
			{
				nums.push_back(k%2);
			}
		}
		for (int i = 0; i < nums.size(); i++)
		{
			if (i != nums.size() -1)
			{
				if (nums[i] != nums[i+1])
				{
					repeat++;
				}
			}
		}
		cout << repeat;
		return 0;
	}
}
