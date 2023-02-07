#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

uint8_t arr[2000001] = { 0, };

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int numOfStudent, allTime;
	cin >> numOfStudent >> allTime;

	vector<int> students;
	for (int i = 0; i < numOfStudent; i++)
	{
		int temp;
		cin >> temp;
		students.push_back(temp);
	}

	for (int student : students)
	{
		for (int i = student; i <= allTime; i += student)
		{
			arr[i] = 1;
		}
	}

	int sumTime = 0;
	for (int i = 1; i <= allTime; i++)
	{
		if (arr[i])
		{
			sumTime += 1;
		}
	}

	cout << sumTime;
	return 0;
}
