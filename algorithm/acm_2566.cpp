#include<iostream>
using namespace std;
int arr[9][10];
int main() {
	int max = 0;
	int x, y;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j]>max) {
				max = arr[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
	}
	cout << max << endl << x << " " << y << endl;
	return 0;
}