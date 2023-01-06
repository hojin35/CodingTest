#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> arr(9, 0);
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < 9; i++)
	{
		int ss = sum;
		ss -= arr[i];
		for (int j = i+1; j < 9; j++)
		{
			int ss1 = ss - arr[j];
			if (ss1 == 100)
			{
				arr[i] = -1;
				arr[j] = -1;
				
				for (int k = 0; k < 9; k++)
				{
					if (arr[k] != -1)
						cout << arr[k] << '\n';
				}
				return 0;
			}
		}
	}
}