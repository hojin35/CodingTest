#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	string in;
	getline(cin, in);
	int n = stoi(in);
	for (int i = 1; i <= n; i++)
	{
		string input;
		getline(cin, input);
		cout << i <<". " << input << endl;
	}
}
