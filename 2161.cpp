#include<iostream>
#include<vector>

using namespace std;
int main()
{
	int n;
	cin >> n;

	vector<int> arr;
	for(int i=1;i<=n;i++)
	arr.push_back(i);

	while (arr.size() > 1)
	{
		cout << arr[0] << " ";
		arr.erase(arr.begin());
		arr.push_back(arr[0]);
		arr.erase(arr.begin());
	}
	if (arr.size() == 1) cout << arr[0];

}
