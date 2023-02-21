#include<iostream>
#include<vector>

using namespace std;
int count1 = 0;

void recursive(int n,int m)
{
	if (n == 1 && m == 1)
		return;
	else if (n >= m)
	{
		count1++;
		recursive(n / 2, m);
		recursive(n - n / 2, m);
	}
	else if (n < m)
	{
		count1++;
		recursive(n, m / 2);
		recursive(n, m - m / 2);
	}
}


int main()
{
	int n, m;

	cin >> n >> m;
	recursive(n, m);

	cout << count1;
}
