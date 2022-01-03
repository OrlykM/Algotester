#include <iostream>
using namespace std;
int main()
{
	long long n, res=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long k;
		cin >> k; 
		res += k - 1;
	}
	cout << res;
	return 0;
}
