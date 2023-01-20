#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> verification = { "TTT","TTH","THT","THH","HTT","HTH","HHT","HHH" };
	int num;
	cin >> num;

	while (num--)
	{
		vector<int> verSum(8, 0);
		string input;
		cin >> input;

		for (int i = 0; i < 38; i++)
		{
			string temp = input.substr(i, 3);
			for (int j = 0; j < 8; j++)
			{
				if (verification[j] == temp)
				{
					verSum[j]++;
				}
			}
		}

		for (int value : verSum)
		{
			cout << value << " ";
		}
		cout << '\n';
	}
	
}
