#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int testCase;
	cin >> testCase;
	while (testCase--) {
		int num;
		cin >> num;
		vector<int> temp;
		temp.assign(num, 0);
		for (int i = 0; i < num; i++) {
			cin >> temp[i];
		}
		sort(temp.begin(), temp.end());
		cout << (temp[temp.size() - 1] - temp[0]) * 2 << endl;
	}
	return 0;
}