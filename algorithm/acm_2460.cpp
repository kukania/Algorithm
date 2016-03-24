#include<iostream>
using namespace std;
int main() {
	int input1, input2;
	int max = 0;
	int temp = 0;
	for (int i = 0; i < 10; i++) {
		cin >> input1 >> input2;
		temp += input2;
		temp -= input1;
		if (max < temp) {
			max = temp;
		}
	}
	cout << max << endl;
	return 0;
}