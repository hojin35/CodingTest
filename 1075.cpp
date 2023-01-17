#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	int b;
	cin >> a >> b;

	a = a - a % 100;
	for (int i = 0; i < 100; i++)
	{
		if ((a + i) % b == 0)
		{
			if (i < 10)
				cout << '0';
			cout << i;
			break;
		}
	}
}
