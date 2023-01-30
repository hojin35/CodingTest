#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<iostream>

using namespace std;

bool Check(vector<int>& arr)
{
	if (arr[0] != 1)
		return false;
	if (arr[1] != 2)
		return false;
	if (arr[2] != 3)
		return false;
	if (arr[3] != 4)
		return false;
	if (arr[4] != 5)
		return false;

	return true;
}
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> arr;

	for (int i = 0; i < 5; i++)
	{
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	while (!Check(arr))
	{
		for (int i = 0; i < 4; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;


				for (int data : arr)
				{
					cout << data << " ";
				}
				cout << "\n";
			}
		}


		
	}
}
