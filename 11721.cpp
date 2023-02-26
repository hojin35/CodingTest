#include<iostream>
#include<vector>

using namespace std;
int main()
{
	string n;

	cin >> n;
	for (int i = 0; i < n.size(); i++)
	{
		cout << n[i];
		if (i % 10 == 9)
		{
			cout << endl;
		}
	}
}
