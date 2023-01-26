#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int row, column;
	cin >> column >> row;

	vector<string> rows;
	string temp;
	for (int i = 0; i < column; i++)
	{
		cin >> temp;
		rows.push_back(temp);
	}

	int rowCount = 0, columnCount = 0;
	for (string oneRow : rows)
	{
		if (oneRow.find('X') == string::npos)
		{
			rowCount++;
		}
	}
	for (int i = 0; i < row; i++)
	{
		bool isIt = false;
		for (string oneRow : rows)
		{
			if (oneRow[i] == 'X')
			{
				isIt = true;
			}
		}
		if (!isIt)
			columnCount++;
	}

	cout << ((rowCount > columnCount) ? rowCount : columnCount);
}
