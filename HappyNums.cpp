#include <iostream>
using namespace std;
int main()
{
	char n[100*100*100+1];
	cin.getline(n, 100 * 100 * 100+1);
	char happy4[2] = {"4"}, happy7[2] = { "7" };
	int k = strlen(n);
	int p = 0;
	if (k >= 1)
	{
		for (int i = 0; i < k; i++)
		{
			
			if (n[i] == happy7[0] || n[i] == happy4[0])
			{
				cout << n[i];
				p++;
			}
			else
			{
				if (i == k - 1 && p == 0) 
				{
					cout << "No luck";
				}
			}
			
		}
		return 0;
	}
}
