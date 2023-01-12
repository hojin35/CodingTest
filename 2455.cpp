#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	int max = 0;
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		int x, y;
		cin >> x >> y;
		sum = sum + y - x;
		if (max < sum) max = sum;
	}
	cout << max;
}
