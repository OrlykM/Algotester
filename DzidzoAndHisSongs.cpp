#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	string s;
	cin >> s;
	if (s.size() >= 2  && s.size() <= 100)
	{
		vector<string> pairss;
		for (int i = 0; i < s.size(); i++)
		{
			string temp = "";
			temp +=	s[i];
			s.erase(s.begin() + i);
			pairss.push_back(s);
			s.insert(i, temp);
		}
		pairss.erase(unique(pairss.begin(), pairss.end()), pairss.end());
		cout << pairss.size();
	}
	return 0;
} 
