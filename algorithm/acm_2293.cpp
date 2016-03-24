#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>coin;
int cnt;
int main() {
	int n;
	int val;
	vector<int> temp;
	temp.assign(10001, 0);
	cin >> n;
	cin >> val;
	temp[0] = 1;
	int tempV;
	vector<int>coin;
	for (int i = 0; i < n; i++) {
		cin >> tempV;
		coin.push_back(tempV);
	}
	for (int i = 0; i < n; i++) {
		for (int j = coin[i] ; j <=val ; j++) {
			temp[j] += temp[j - coin[i]];
		}
	}
	cout << temp[val] << endl;
	return 0;
}