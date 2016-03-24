#include<iostream>
using namespace std;
int main() {
	int input;
	cin >> input;
	int cnt = 0;
	int sum = 0;
	int temp;
	for (int i = 0; i < input; i++) {
		cin >> temp;
		if (temp == 1)
			cnt++;
		else
			cnt = 0;
		sum += cnt;
	}
	cout << sum << endl;
	return 0;
}