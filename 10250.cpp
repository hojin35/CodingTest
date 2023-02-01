#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int repeat;
	cin >> repeat;
	while (repeat--)
	{
		int H, W, N;

		int floor = 1, room = 1;
		cin >> H >> W >> N;

		for (int i = 1; i < N; i++)
		{
			if (floor < H)
			{
				floor++;
			}
			else
			{
				floor = 1;
				room++;
			}
		}

		cout << floor;
		if (room / 10 == 0)
			cout << "0";
		cout << room << '\n';
	}
}
