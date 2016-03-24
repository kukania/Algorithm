#include<iostream>
using namespace std;
int main() {
	int min=101;
	int sum = 0;
	int temp = 0;
	for (int i = 0; i < 7; i++) {
		cin >> temp;
		if (temp % 2 == 1) {
			sum += temp;
			if (min > temp)
				min = temp;
		}
	}
	cout << sum << endl;
	cout << min << endl;
	return 0;
}