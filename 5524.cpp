#include<iostream>
#include<vector>

using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;

		for (char &i : input)
		{
			if (i >= 'A' && i <= 'Z')
			{
				i += 32;
			}
		}
		cout << input << endl;
	}
}
