#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int repeat;
	cin >> repeat;

	while (repeat--)
	{
		string input;
		cin >> input;

		int num1 = 0,num2;

		num1 += (input[0] - 'A') * 26 * 26;
		num1 += (input[1] - 'A') * 26;
		num1 += input[2] - 'A';

		string sNum = input.substr(4, 4);
		num2 = stoi(sNum);

		num1 -= num2;

		if (num1 <= 100 && num1 >= -100)
			cout << "nice\n";
		else
			cout << "not nice\n";
	}
	return 0;
}
