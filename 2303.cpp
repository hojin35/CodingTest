#include <iostream>
#include <vector>
#include <algorithm>
#include<string>

using namespace std;

int FindMaxValue(int a,int b,int c,int d,int e)
{
	int result = 0;
	result = (a + b + c) % 10 > result ? (a + b + c) % 10 : result;
	result = (a + b + d) % 10 > result ? (a + b + d) % 10 : result;
	result = (a + b + e) % 10 > result ? (a + b + e) % 10 : result;
	result = (a + c + d) % 10 > result ? (a + c + d) % 10 : result;
	result = (a + c + e) % 10 > result ? (a + c + e) % 10 : result;
	result = (a + d + e) % 10 > result ? (a + d + e) % 10 : result;
	result = (b + c + d) % 10 > result ? (b + c + d) % 10 : result;
	result = (b + c + e) % 10 > result ? (b + c + e) % 10 : result;
	result = (b + d + e) % 10 > result ? (b + d + e) % 10 : result;
	result = (c + d + e) % 10 > result ? (c + d + e) % 10 : result;
	return result;
}
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int numOfPeople;
	cin >> numOfPeople;

	int maxValue = 0;
	int maxIndex = 0;

	for (int i = 1; i <= numOfPeople; i++)
	{
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		int temp = FindMaxValue(a, b, c, d, e);
		if (maxValue <= temp)
		{
			maxValue = temp;
			maxIndex = i;
		}
	}
	cout << maxIndex;
	return 0;
}
