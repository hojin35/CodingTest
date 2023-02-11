#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#pragma warning(disable:4996)
using namespace std;
class Time
{
public:
	int hour, minute, second;
	Time(int _hour, int _minute, int _second)
	{
		hour = _hour;
		minute = _minute;
		second = _second;
	}
};

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int h, m, s;
	scanf("%d:%d:%d", &h, &m, &s);
	Time t1(h, m, s);
	scanf("%d:%d:%d", &h, &m, &s);
	Time t2(h, m, s);

	int saveTime1 = t1.hour * 3600 + t1.minute * 60 + t1.second;
	int saveTime2 = t2.hour * 3600 + t2.minute * 60 + t2.second;

	int data;
	if (saveTime1 < saveTime2)
	{
		data = saveTime2 - saveTime1;
	}
	else
	{
		data = 86400 + saveTime2 - saveTime1;
	}

	h = data / 3600;
	data %= 3600;
	m = data / 60;
	s = data % 60;

	printf("%02d:%02d:%02d", h, m, s);

	return 0;
}
