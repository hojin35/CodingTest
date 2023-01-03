#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int maxValue = 0;
    int days;
    int countDays;
    cin >> days;
    cin >> countDays;
    vector<int> temperature;
    int temperatureInput;
    for(int i=0;i<days;i++)
    {
        cin >> temperatureInput;
        temperature.push_back(temperatureInput);
    }
    int num = 0;
    
    for(int i=0;i<countDays;i++)
    {
        num+=temperature[i];
    }
    maxValue = num;
    for(int i=0;i<days - countDays;i++)
    {
        num = num - temperature[i] + temperature[i+countDays];
         if(maxValue < num)
            maxValue = num;
    }
    cout << maxValue;
    return 0;
}

// ==================================================
// 인터넷에서 찾은 정답 



// #include <iostream>
// #include <algorithm>
// using namespace std;
// int n,k,tmp,ret = -1000000;
// int psum[100001];
// int main() {
// 	cin >> n >> k;
// 	for (int i = 1; i <= n; i++) {
// 		cin >> tmp;
// 		psum[i] = psum[i - 1] + tmp;
// 	}
// 	for (int i = k; i <= n; i++) {
// 		ret = max(ret, psum[i] - psum[i - k]);
// 	}
// 	cout << ret;
// }