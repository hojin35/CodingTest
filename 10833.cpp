#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int sum = 0;
	int a, b;
	while (n--)
	{
		cin >> a >> b;
		sum += b % a;
	}

	cout << sum;
}
