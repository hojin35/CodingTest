#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int input;
	cin >> input;

	vector<int> arr(1,0);

	int maxIndex = 0;
	int max = 0;
	for (int i = 1; i <= input; i++)
	{
		int count = 1;
		int a = input, b = i;
		int temp;

		while (1)
		{
			temp = a - b;
			if (temp < 0)
			{
				arr.push_back(count);
				
				if (max < count)
				{
					max = count;
					maxIndex = i;
				}
				break;
			}
			a = b;
			b = temp;
			count++;
		}
	}

	cout << max+1 << "\n";

	int tmp = input;
	int a = input, b = maxIndex;

	cout << a << " " << b << " ";
	while (1)
	{
		tmp = a - b;
		if (tmp < 0) break;
		a = b;
		b = tmp;
		cout << tmp << " ";
	}
}
