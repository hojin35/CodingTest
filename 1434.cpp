#include<iostream>
#include<vector>

using namespace std;
int main()
{
	int box, book;
	cin >> box >> book;
	vector<int> boxEmpty;
	for (int i = 0; i < box; i++)
	{
		int temp;
		cin >> temp;
		boxEmpty.push_back(temp);

	}
	int empty = 0;
	for (int i = 0; i < book; i++)
	{
		int temp;
		cin >> temp;
		if (boxEmpty[0] >= temp) boxEmpty[0] -= temp;
		else
		{
			while (1)
			{
				empty += boxEmpty[0];
				boxEmpty.erase(boxEmpty.begin());
				if (boxEmpty[0] < temp) continue;
				boxEmpty[0] -= temp;
				break;
			}
		}
	}
	for (int box1 : boxEmpty)
	{
		empty += box1;
	}
	cout << empty;
	return 0;
}
