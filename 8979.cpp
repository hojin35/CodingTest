#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, target;
	cin >> n >> target;

	target -= 1;
	vector<int> gold(n, 0);
	vector<int> silver(n, 0);
	vector<int> bronze(n, 0);
	int x, a, b, c;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> a >> b >> c;
		x -= 1;
		gold[x] = a;
		silver[x] = b;
		bronze[x] = c;
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (gold[i] > gold[target])
		{
			count++;
		}
		else if (gold[i] < gold[target])
		{
		}
		else if (silver[i] > silver[target])
		{
			count++;
		}
		else if (silver[i] < silver[target])
		{
		}
		else if (bronze[i] > bronze[target])
		{
			count++;
		}
		else if (bronze[i] < bronze[target])
		{
		}
	}
	cout << count + 1;
}
