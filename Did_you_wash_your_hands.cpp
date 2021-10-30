#include <iostream>
using namespace std;
int main()
{
    int a, b, k;
    int n = 0;
    cin >> a >> b >> k;
    for (int i = 0; i < k; i++)
    {
        if (i == 0)
        {
            n += a + b;
        }
        else
        {
            n += b;
        }
    }
    cout << n;

    return 0;
}