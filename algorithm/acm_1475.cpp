#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	string input;
	cin >> input;
	vector <int> arr;
	arr.assign(10, 0);
	for (int i = 0; i < input.size(); i++) {
		arr[input[i] - '0']++;
	}
	int maxIndex = 0;
	int maxTemp=arr[0];
	for (int i = 1; i < 10; i++) {
		if (maxTemp < arr[i]) {
			maxTemp = arr[i];
			maxIndex = i;
		}
	}
	if (maxIndex == 6 || maxIndex == 9) {
		cout << (arr[6]+arr[9])/2 + (arr[6] + arr[9])%2 << endl;
	}
	else
		cout << maxTemp << endl;
	return 0;
}