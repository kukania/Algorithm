#include<iostream>
#include<string>
using namespace std;
int main() {
	string input;
	int num[] = { 4,2,1 };
	cin >> input;
	string result = "";
	for (int i = 0; i < input.size(); i++) {
		if (input[0] == 0)
			break;
		int temp = input[i] - '0';
		for (int j = 0; j < 3; j++) {
			result += (temp / num[j]) + '0';
			temp %= num[j];
		}
	}
	bool flag = true;
	for (int i = 0; i < result.size(); i++) {
		if (flag) {
			if (result[i] == '0')
				continue;
			flag = false;
		}
		cout << result[i];
	}
	cout << endl;
	return 0;
}