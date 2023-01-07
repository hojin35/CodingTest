#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	string input;
	getline(cin, input);
	string output;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] >= 'A' && input[i] <= 'M')
			output += input[i] + 13;
		else if (input[i] >= 'N' && input[i] <= 'Z')
			output += input[i] - 13;
		else if (input[i] >= 'a' && input[i] <= 'm')
			output += input[i] + 13;
		else if (input[i] >= 'n' && input[i] <= 'z')
			output += input[i] - 13;
		else
			output += input[i];
	}
	cout << output;
}