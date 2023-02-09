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

	int maxValue = 0;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	int startValue = -1;
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] < arr[i + 1] && startValue == -1)
		{
			startValue = arr[i];
		}
		else if(arr[i] >= arr[i+1] && startValue != -1)
		{
			maxValue = maxValue > (arr[i] - startValue) ? maxValue : (arr[i] - startValue);
			startValue = -1;
		}
	}
	if (startValue != -1)
	{
		maxValue = maxValue > arr[n - 1] - startValue ? maxValue : arr[n-1] - startValue;
	}
	cout << maxValue;
	
	return 0;
}
