#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> color = {"black","brown","red","orange","yellow","green","blue","violet","grey","white"};

	string a, b, c;
	cin >> a >> b >> c;

	long long num = 0;
	
	for (int i = 0; i < 10; i++)
	{
		if (!a.compare(color[i]))
		{
			num = i;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (!b.compare(color[i]))
		{
			num = num * 10 + i;
		}
	}
	int n = 1;
	for (int i = 0; i < 10; i++)
	{
		if (!c.compare(color[i]))
		{
			num *= n;
		}
		n *= 10;
	}
	cout << num;
}
