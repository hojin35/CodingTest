#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	string n;
	while (1)
	{
		cin >> n;
		if (n == "0") break;
		
		int sum = 1;
		for (char ch : n)
		{
			if (ch == '1')
				sum += 2;
			else if (ch == '0')
				sum += 4;
			else
				sum += 3;
			sum += 1;
		}
		cout << sum << endl;
	}
	return 0;
}
