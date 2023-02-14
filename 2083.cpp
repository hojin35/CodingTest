#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	while (1)
	{
		string a;
		int b, c;
		cin >> a >> b >> c;
		if (a == "#")
			break;
		if (b > 17 || c >= 80)
			cout << a << " Senior" << endl;
		else
			cout << a << " Junior" << endl;
	}
	return 0;
}
