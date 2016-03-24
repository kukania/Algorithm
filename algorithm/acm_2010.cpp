#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int num;
	cin >> num;
	int max = 0;
	int temp = 0;
	vector<int> multi;
	while (num--) {
		cin >> temp;
		multi.push_back(temp);
	}
	sort(multi.begin(), multi.end());
	temp = multi.size() > 1000 ? 1000 : multi.size();
	for (int i = 0; i < temp; i++) {
		max += multi[i];
	}
	max -= temp - 1;
	cout << max << endl;
	return 0;
}