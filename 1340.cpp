#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	string month;
	int day;
	int year;
	int hour;
	int minutes;
	bool isLeapYear = false;

	int countMonthDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31};
	vector<string> alpabetMonth = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	char temp;
	char temp2;
	cin >> month >> day >> temp >> year >> hour >> temp2 >> minutes;

	if (year % 4 == 0)
	{
		isLeapYear = true;
		if (year % 100 == 0)
		{
			isLeapYear = false;
			if (year % 400 == 0)
			{
				isLeapYear = true;
			}
		}
	}
	if (isLeapYear) countMonthDays[1] = 29;
	int totalMinutes = isLeapYear == true ? 366 : 365;
	totalMinutes *= 1440;

	int countMinutes = 0;
	for (int i = 0; i < 12; i++)
	{
		if (alpabetMonth[i].compare(month))
		{
			countMinutes += countMonthDays[i] * 1440;
		}
		else
		{
			countMinutes += (day-1) * 1440 + hour * 60 + minutes;
			break;
		}
	}
	cout << fixed;
	cout.precision(15);
	cout << (double)(((double)countMinutes / (double)totalMinutes) * 100);
}
