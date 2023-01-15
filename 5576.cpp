#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int input;
	vector<int> aTeam;
	vector<int> bTeam;
	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		aTeam.push_back(input);
	}

	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		bTeam.push_back(input);
	}
	sort(aTeam.begin(),aTeam.end());
	sort(bTeam.begin(),bTeam.end());

	cout << aTeam[7] + aTeam[8] + aTeam[9] << " " << bTeam[7] + bTeam[8] + bTeam[9];
}
