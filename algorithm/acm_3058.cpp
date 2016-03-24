#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int main() {
	int testCase;
	cin >> testCase;
	while (testCase--) {
		vector<int> arr;
		int temp;
		int sum = 0;
		for (int i = 0; i < 7; i++) {
			cin >> temp;
			if (temp % 2 == 0) {
				sum += temp;
				arr.push_back(temp);
			}
		}
		sort(arr.begin(), arr.end());
		cout << sum << " " << arr[0] << endl;
	}
	return 0;
}