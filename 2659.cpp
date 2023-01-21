#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<sstream>
using namespace std;

int FindMinValue(vector<int>& targetNum)
{

	int num = targetNum[0] * 1000 + targetNum[1] * 100 + targetNum[2] * 10 + targetNum[3];
	int minValue = num;

	for (int i = 0; i < 3; i++)
	{
		num = (num % 1000) * 10 + num / 1000;
		minValue = minValue > num ? num : minValue;
	}
	return minValue;
}
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	vector<bool> arr(10000, false);

	vector<int> targetNum;
	for (int i = 0; i < 4; i++)
	{
		int input;
		cin >> input;
		targetNum.push_back(input);
	}
	int target = FindMinValue(targetNum);

	int num = 0;
	int count = 0;
	for (int i = 1111; i <= 9999; i++)
	{
		if (arr[i] == true)
			continue;
		if (i % 1000 < 100)
			continue;
		if (i % 100 < 10)
			continue;
		if (i % 10 == 0)
			continue;

		num = i;
		for (int j = 0; j < 4; j++)
		{
			num = (num % 1000) * 10 + num / 1000;
			arr[num] = true;
		}

		count++;
		if (target == i)
		{
			cout << count;
		}
	}
	
	
}
