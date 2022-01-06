#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	int m = 500;
	cin >> n;
	int arr[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
	if (n >= 1 && n <= 500)
	{
		int k = m - n;
		int j = 0;
		for (int i = 0; i < 9; i++)
		{
			while (k % arr[i] != k)
			{
				j++;
				k -= arr[i];
			}
		}
		cout << j;
		return 0;
	}
}
