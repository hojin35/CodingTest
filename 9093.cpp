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

	int num;
	cin >> num;

	num += 1;
	while (num--)
	{
		string str;
		getline(cin, str);
		stringstream ss(str);
		ss.str(str);

		if (str == "")
			continue;

		string word;
		string reverseWord = "";
		while (ss >> word)
		{
			for (int i = word.size() - 1; i >= 0; i--)
			{
				reverseWord += word[i];
			}
			reverseWord += ' ';
		}

		cout << reverseWord << '\n';
	}
	
}
