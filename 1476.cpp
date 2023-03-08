#include<iostream>
#include<vector>

using namespace std;
int main()
{
	int e, s, m;
	cin >> e >> s >> m;

	int a = 1, b = 1, c = 1;
	int cnt = 1;
	while (1)
	{
		if (a == e && b == s && c == m)
		{
			cout << cnt;
			break;
		}
		cnt++;
		a = a % 15 + 1; 
		b = b % 28 + 1;
		c = c % 19 + 1;
	}
}
