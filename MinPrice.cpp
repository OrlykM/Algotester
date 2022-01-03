#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, k;
	int p = 0;
	cin >> k >> n;
	if (k >= 1 && k<= 100 && n >= 1 && k <= 100)
	{
		vector<int> nums;
		for (int i = 0; i < n; i++)
		{
			int price;
			cin >> price;
			if (price >= 1 && price <= 100)
			{
				nums.push_back(price);
			}
		}
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size(); i++)
		{
			if (k >= nums[i])
			{
				k -= nums[i];
				p++;
			}
		}
		cout << p;
		return 0;
	}
}
