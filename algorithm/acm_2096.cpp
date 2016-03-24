#include<iostream>
#include<string.h>
using namespace std;
int dp1[100001];
int dp2[100001];
int dp3[100001];
int temp1[100001];
int temp2[100001];
int temp3[100001];
int main() {
	int input;
	cin >> input;
	for (int i = 0; i < input; i++) {
		cin >> temp1[i];
		cin >> temp2[i];
		cin >> temp3[i];
	}
	for (int i = 0; i<input; i++) {
		dp1[i] = temp1[i];
		dp2[i] = temp2[i];
		dp3[i] = temp3[i];
	}

	for (int i = 1; i < input; i++) {
		dp1[i] += dp1[i - 1]>dp2[i - 1] ? dp1[i - 1] : dp2[i - 1];
		int max = dp1[i - 1]>dp2[i - 1] ? dp1[i - 1] : dp2[i - 1];
		max = max > dp3[i - 1] ? max : dp3[i - 1];
		dp2[i] += max;
		dp3[i] += dp2[i - 1] > dp3[i - 1] ? dp2[i - 1] : dp3[i - 1];
	}
	int max = dp1[input - 1] > dp2[input - 1] ? dp1[input - 1] : dp2[input - 1];
	max = max > dp3[input - 1] ? max : dp3[input - 1];
	cout << max << " ";


	for (int i = 0; i<input; i++) {
		dp1[i] = temp1[i];
		dp2[i] = temp2[i];
		dp3[i] = temp3[i];
	}
	for (int i = 1; i < input; i++) {
		dp1[i] += dp1[i - 1]<dp2[i - 1] ? dp1[i - 1] : dp2[i - 1];
		int min = dp1[i - 1]<dp2[i - 1] ? dp1[i - 1] : dp2[i - 1];
		min = min < dp3[i - 1] ? min : dp3[i - 1];
		dp2[i] += min;
		dp3[i] += dp2[i - 1] < dp3[i - 1] ? dp2[i - 1] : dp3[i - 1];
	}
	int min = dp1[input - 1] < dp2[input - 1] ? dp1[input - 1] : dp2[input - 1];
	min = min < dp3[input - 1] ? min : dp3[input - 1];
	cout << min << endl;
	return 0;
}