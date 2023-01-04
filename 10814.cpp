#include <iostream>
#include <vector>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<vector<string>> peopleIn(201);
	int numOfPeople;
	cin >> numOfPeople;
	int age;
	string name;
	while (numOfPeople)
	{
		cin >> age >> name;
		peopleIn[age].push_back(name);
		numOfPeople--;
	}

	for (int i = 0; i <= 200; i++)
	{
		if (peopleIn[i].size() != 0)
		{
			for (string entityName : peopleIn[i])
			{
				cout << i << " " << entityName << '\n';
			}
		}
	}
}

