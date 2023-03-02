#include<iostream>
#include<vector>

using namespace std;
int main()
{
	int sum = 0;
	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		int a, b;
		cin >> a >> b;

		sum += b;
		sum -= a;
		max = max > sum ? max : sum;
	}

	cout << max; 
}
