#include<iostream>
#include<vector>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int max = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int arr[7] = { 0, };

		for (int j = 0; j < 3; j++)
		{
			int temp;
			cin >> temp;
			arr[temp]++;
		}

		for (int j = 1; j <= 6; j++)
		{
			if (arr[j] == 3)
				sum = 10000 + j * 1000;
			if (arr[j] == 2)
				sum = 1000 + j * 100;
			if (arr[j] == 1)
				sum = 100 * j;
			if (max < sum) max = sum;
		}
	}
	cout << max;
}
