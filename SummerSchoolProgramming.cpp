#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;
using std::string;
int main()
{
    int n, k;
    cin >> n >> k;
    if (n >= 1 && n <= 1000 && k >= 1 && k <= 100)
    {
        int s = n / k;
        int m = n % k;
        vector<int> nums;
        if (s >= 1 && s <= 3)
        {
            for (int i = 0; i < k; i++)
            {
                nums.push_back(s);
            }
            if (s == 3 && m > 0)
            {
                cout << "Impossible";
                return 0;
            }
            else
            {
                if (n >= k)
                {
                    if (m > 0)
                    {
                        for (int i = 0; i < nums.size(); i++)
                        {
                            if (m > 0)
                            {
                                if (nums[i] < 3)
                                {
                                    while (nums[i] < 3 && m > 0)
                                    {
                                        nums[i]++;
                                        m--;
                                    }
                                }
                            }
                            else
                            {
                                break;
                            }
                        }
                    }
                    for (int i = 0; i < nums.size(); i++)
                    {
                        cout << nums[i] << " ";
                    }
                }
                else
                {
                    cout << "Impossible";
                }
            }       
        }
        else
        {
            cout << "Impossible";
        }
    }
    return 0;
}
