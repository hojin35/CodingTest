#include <iostream>
#include <vector>
#include <algorithm>
#include<string>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int maxIndex = 0;
	int max = 0;
	int a, b, c, d;
	for (int i = 1; i <= 5; i++)
	{
		cin >> a >> b >> c >> d;

		if (a + b + c + d > max)
		{
			max = a + b + c + d;
			maxIndex = i;
		}
	}

	cout << maxIndex << " " << max;
}
