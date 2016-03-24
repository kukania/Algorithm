#include<iostream>
using namespace std;
int main() {
	int arr[5] = { 0, };
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			int temp;
			cin >> temp;
			arr[i] += temp;
		}
	}
	int max = 0;
	int index;
	for (int i = 0; i < 5; i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}
	cout << index + 1 << " " << max << endl;
}