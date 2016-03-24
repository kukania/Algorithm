#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int input;
	int input2;
	int num = 0;
	vector<int> n;
	for (int i = 0; i < 4; i++) {
		cin >> input;
		cin >> input2;
		num = num + input2 - input;
		n.push_back(num);
	}
	sort(n.begin(), n.end());
	cout << n[n.size() - 1] << endl;
	return 0;
}