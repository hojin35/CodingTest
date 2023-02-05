#include <iostream>
#include <vector>
#include <algorithm>
#include<string>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int repeatCount;
	cin >> repeatCount;

	while (repeatCount--)
	{
		vector<int> arr;
		for (int i = 0; i < 10; i++)
		{
			int temp;
			cin >> temp;
			arr.push_back(temp);
		}

		sort(arr.begin(), arr.end());

		cout << arr[7] << '\n';
	}
	return 0;
}
