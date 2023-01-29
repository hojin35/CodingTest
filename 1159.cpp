#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	vector<vector<string>> member(26);

	int num;
	cin >> num;

	string str;
	for (int i = 0; i < num; i++)
	{
		cin >> str;
		member[str[0] - 'a'].push_back(str);
	}

	bool hasTeam = false;
	for (int i = 0; i < 26; i++)
	{
		if (member[i].size() >= 5)
		{
			cout << char('a' + i);
		hasTeam = true;
		}
	}

	if (!hasTeam)
	{
		cout << "PREDAJA";
	}
}
