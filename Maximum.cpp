#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n>= 0 && n <= 1000)
	{
		vector<int> nums;
		for (int i = 0; i < n; i++)
		{
			long long k;
			cin >> k;
			if (k >= -12345678 && k <= 12345678)
			{
				nums.push_back(k);
			}

		}
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] >= nums[0])
			{
				nums[0] = nums[i];
			}
		}
		cout << nums[0];
		return 0;
	}
}
