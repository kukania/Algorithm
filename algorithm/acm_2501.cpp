#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int input1, input2;
	cin >> input1 >> input2;
	vector<int>arr;
	for (int i = 1; i <= input1; i++) {
		if (input1%i == 0)
			arr.push_back(i);
	}
	sort(arr.begin(), arr.end());
	if (arr.size() >= input2)
		cout << arr[input2 - 1] << endl;
	else
		cout << 0 << endl;
	return 0;
}