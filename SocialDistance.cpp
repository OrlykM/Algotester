#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
  vector<int> m;
  int n; cin >> n;
  int k;
  string p = "YES";

  for (int i = 0; i < n; i++)
  {
    cin >> k;
    m.push_back(k);
  }
  for (int i = 0; i < n-1; i++)
  {
    if (fabs(m[i]-m[i+1]) < 2) {
      p = "NO";
    }
  }
  cout << p;
  return 0;
