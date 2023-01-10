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
	cin >> n;

	int days = 0;
	int stack = 0;
	while (n > 0)
	{
		if (n - stack - 1 >= 0)
		{
			n = n - ++stack;
			days++;
		}
		else 
		{
			stack = 0;
		}
	}
	cout << days;
}
