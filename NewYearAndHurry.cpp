#include <iostream>
using namespace std;
int find(int n, int k)
{
    int left = 0, right = 11;
    int count = 0;
    for (int i = 0; i < 54; i++)
    {
        int mid = (right + left) / 2;
        if (mid > n)
        {
            right = mid;
            continue;
        }
        count = 0;
        for (int i = 1; i <= mid; i++)
        {
            count += (5 * i);
        }
        if ((count+k)-240 > 0)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    return left;
}
int main()
{   
    int n, k;
    cin >> n >> k;
    cout << find(n, k);
    return 0;
}
