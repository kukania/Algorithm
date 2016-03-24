#include<iostream>
#include<string>
using namespace std;
int main() {
	string input;
	cin >> input;
	int num = 0;
	for (int i = 0; i < input.size(); i++) {
		num *= 16;
		if ('0' <= input[i] && input[i] <= '9') {
			num += (input[i] - '0');
		}
		else {
			num += (input[i] - 'A'+10);
		}
	}
	cout << num << endl;
	return 0;
}