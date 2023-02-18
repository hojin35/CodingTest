#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int sum = 5;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		sum = (sum + (i * 3) + 1) % 45678;
	}
	cout << sum;
	return 0;
}
