#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);

	int n,m;
		int result = 0;
		cin >> n >> m;
		result = n * (m - 1);
		result += 1;
		cout << result;
	return 0;
}
