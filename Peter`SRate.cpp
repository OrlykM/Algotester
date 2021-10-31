#include <iostream>
#define size 100*100*100+1
using namespace std;
int main(){
    int x, y, z;
    int flex1, flex2;
    cin >> x >> y >> z;
    if (x >= 1 && y >= 1 && z >= 1 && x <= size && y <=size && z<= size)
    {
        flex1 = x - y;
        flex2 = x + y;
        for (int i = flex1; i <= flex2; i++)
        {
            if (z >= flex1)
            {
                if (z <= flex2)
                {
                    if (i == z)
                    {
                        cout << i;
                        break;
                    }
                }
                else
                {
                    cout << flex2;
                    break;
                }
            }
            else
            {
                cout << -1;
                break;
            }
        }
        return 0;
    } 
}
