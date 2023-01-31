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

	int num;

	cin >> num;

	int sum = 0;
	
	int digit = 0;

	vector<int> arr = {1,10,100,1000,10000,100000,1000000,10000000,100000000 };
	for (int i = 1; i <= num; i++)
	{
		if (i == arr[digit])
		{
			digit++;
		}
		sum += digit;
		
	}
	cout << sum;
}
