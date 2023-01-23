#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<iostream>

#pragma warning(disable:4996)
using namespace std;

int main()
{
	//cin.tie(NULL);
	//cout.tie(NULL);
	int input1, input2;

	while (scanf("%d %d", &input1, &input2)!=EOF)
	{
		int sum = 0;
		int temp = 0;
		while (1)
		{
			temp = input1 / input2;
			input1 %= input2;
			input1 += temp;

			sum += temp * input2;

			if (input1 / input2 <= 0)
				break;
		}

		sum += input1;

		cout << sum << '\n';
	}
}
