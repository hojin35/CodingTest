#include<iostream>
#include<vector>

using namespace std;
int main()
{
	int sum;
	int a, b, c, d;
	for (int i = 0; i < 3; i++)
	{
		cin >> a >> b >> c >> d;
		sum = a + b + c + d;
		if (sum == 0) cout << "D" << endl;
		if (sum == 1) cout << "C" << endl;
		if (sum == 2) cout << "B" << endl;
		if (sum == 3) cout << "A" << endl;
		if (sum == 4) cout << "E" << endl;
	}
}
