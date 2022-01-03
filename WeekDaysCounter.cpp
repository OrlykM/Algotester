#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	long long days[7] = {0, 0, 0, 0, 0, 0, 0};
	long long repeats;
	string day;
	long long n;
	cin >> day >> n;
	if (n >= 1 && n <= pow(10, 9))
	{
		if (n <= 7)
		{
			for (int i = 0; i < 7; i++)
			{
				if (week[i] == day)
				{

					while (n != 0)
					{
						if (i == 6)
						{
							days[i]++;
							i = 0;
							n--;
						}
						else
						{
							days[i]++;
							i++;
							n--;
						}
					}
					break;
				}
			}
			for (int i = 0; i < 7; i++)
			{
				cout << days[i] << " ";
			}
		}
		else
		{
			if (n % 7 == 0)
			{
				repeats = n / 7;
				for (int i = 0; i < 7; i++)
				{
					days[i] = repeats;
				}
				for (int i = 0; i < 7; i++)
				{
					cout << days[i] << " ";
				}
			}
			else
			{
				repeats = n / 7;
				for (int i = 0; i < 7; i++)
				{
					days[i] = repeats;
				}
				int other_repeats = n % 7;
				for (int i = 0; i < 7; i++)
				{
					if (week[i] == day)
					{		
						
						while (other_repeats != 0)
						{
							if (i == 6)
							{
								days[i]++;
								i = 0;
								other_repeats--;
							}
							else 
							{
								days[i]++;
								i++;
								other_repeats--;
							}
						}
						break;
					}
				}
				for (int i = 0; i < 7; i++)
				{
					cout << days[i] << " ";
				}
			}
		}
	}
}
