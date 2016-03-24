#include<iostream>
using namespace std;
int main() {
	int index;
	int max = 0;
	int temp;
	for (int i = 0; i < 9; i++) {
		cin >> temp;
		if (max < temp) {
			max = temp;
			index = i;
		}
	}
	cout << max << endl << index + 1 << endl;
	return 0;
}