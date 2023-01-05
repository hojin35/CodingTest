#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1;;i++)
	{
		if (i >= n)
		{
			if (i % 2 == 0)
			{
				cout << n << "/" << i - n + 1;
				return 0;
			}
			if (i % 2 == 1)
			{
				cout << i-n+1 << "/" << n;
				return 0;
			}
		}
		n -= i;
	}
}