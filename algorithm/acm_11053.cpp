#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int arr[1001];
int dp[1001];
int main() {
	int input;
	vector<int> len;
	cin >> input;
	for (int i = 0; i < input; i++)
		cin >> arr[i];
	int max = 0;
	for (int i = 0; i < input; i++) {
		for (int j = i; j < input; j++) {
			if (arr[i] < arr[j]) {
				if (dp[i] >=dp[j])
					dp[j] = dp[i] + 1;
				if (max < dp[j])
					max = dp[j];
			}
		}
	}
	cout << max+1 << endl;
	return 0;
}