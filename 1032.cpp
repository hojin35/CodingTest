#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	int num;
	cin >> num;

	vector<string> arr;
	string input;
	for (int i = 0; i < num; i++)
	{
		cin >> input;
		arr.push_back(input);
	}
	string result;
	
	for (int i = 0; i < arr[0].size(); i++)
	{
		bool isCorrect = true;
		for (int j = 0; j < arr.size(); j++)
		{
			if (arr[0][i] != arr[j][i])
			{
				isCorrect = false;
			}
		}
		if (isCorrect == false) result += '?';
		else if (isCorrect == true) result += arr[0][i];
	}
	cout << result;
}
