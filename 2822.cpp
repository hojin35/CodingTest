#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

void FindMinValue(vector<int>& arr, int n)
{
	int min = arr[0];
	int minIndex = 0;
	for (int i = 1; i < arr.size(); i++)
	{
		if (min > arr[i]) min = arr[i], minIndex = i;
	}
	if (min < n)
	{
		arr.erase(arr.begin() + minIndex);
		arr.push_back(n);
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int size = 8;
	vector<int> arr(8, 0);
	vector<int> answer;
	int n;
	int min;
	int minIndex;
	cin >> n;
	arr[0] = n;
	min = n;
	minIndex = 0;
	answer.push_back(n);
	for (int i = 1; i < 5; i++)
	{
		cin >> n;
		arr[i] = n;
		if (n < min)
		{
			min = n;
			minIndex = i;
		}
		answer.push_back(n);
	}
	for (int i = 5; i < size; i++)
	{
		
		cin >> n;
		arr[i] = n;
		FindMinValue(answer, n);
	}
	int add = 0;
	vector<int> answerIndex;
	for (int i = 0; i < 5; i++)
	{
		add += answer[i];
		for (int j=0;j<8;j++)
		{
			if (arr[j] == answer[i])
			{
				answerIndex.push_back(j + 1);
				break;
			}
		}
	}
	cout << add << '\n';
	for (int& entity : answerIndex)
		cout << entity << " ";
}
