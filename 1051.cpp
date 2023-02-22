#include<iostream>
#include<vector>

using namespace std;
bool OutOfIndexCheck(int i,int j,vector<vector<int>> &arr)
{
	if (i >= arr.size())
		return true;
	if (j >= arr[0].size())
		return true;
	return false;
}
bool Check(int i, int j,int k, vector<vector<int>>& arr)
{
	int value = arr[i][j];
	if (value != arr[i + k][j]) return false;
	if (value != arr[i][j + k]) return false;
	if (value != arr[i + k][j + k]) return false;
	return true;
}
int main()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> arr;
	for (int i = 0; i < n; i++)
	{
		arr.push_back(vector<int>());
		for (int j = 0; j < m; j++)
		{
			char temp;
			cin >> temp;
			arr[i].push_back(temp - '0');
		}
	}
	int maxSize = 1;
	int maxKSize = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int k = maxKSize+1;; k++)
			{
				if (OutOfIndexCheck(i + k, j + k, arr)) break;
				if (Check(i, j, k, arr)) 
				{
					maxKSize = k, maxSize = (k+1) * (k+1);
				}
			}
		}
	}
	cout << maxSize;

	return 0;
}
