#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, target;
	cin >> n >> target;

	target -= 1;
	vector<int> gold(n,0);
	vector<int> silver(n,0);
	vector<int> bronze(n,0);
	vector<bool> check(n,0);
	int x,a, b, c;
	for (int i = 0; i < n; i++)
	{
		cin >>x>> a >> b >> c;
		x -= 1;
		gold[x] = a;
		silver[x] = b;
		bronze[x] = c;
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (check[i] != true)
		{
			if (gold[i] > gold[target])
			{
				check[i] = true;
				count++;
			}
			if (gold[i] < gold[target])
			{
				check[i] = true;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (check[i] != true)
		{
			if (silver[i] > silver[target])
			{
				check[i] = true;
				count++;
			}
			if (silver[i] < silver[target])
			{
				check[i] = true;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (check[i] != true)
		{
			if (bronze[i] > bronze[target])
			{
				check[i] = true;
				count++;
			}
			if (bronze[i] < bronze[target])
			{
				check[i] = true;
			}
		}
	}
	cout << count + 1;
}
