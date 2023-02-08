#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;
	int cnt = 1;
	int target = 0;
	vector<int> arr(n, 0);
	vector<int> result;

	for (int i = 0; i < n; i++)
		arr[i] = i + 1;
	while (arr.size())
	{
		if (cnt == k)
		{
			result.push_back(arr[target]);
			arr.erase(arr.begin() + target);
			target--;
			cnt = 0;
		}
		target++;
		cnt++;
		if (target >= arr.size()) target = 0;
	}

	cout << '<' << result[0];
	for (int i = 1; i < result.size(); i++)
		cout << ", " << result[i];
	cout << '>';
	return 0;
}
