#include<iostream>
using namespace std;
int arr[21][21];
bool check(int x, int y, int num) {
	int temp = 0;
	for (int i = -5; i <= 5; i++) {
		if (arr[x + i][y] == num) {
			temp++;
			if (temp == 6)
				break;
		}
		else {
			if (temp == 5)
				return true;
			else
				temp = 0;
		}
	}
	temp = 0;
	for (int i = -5; i <= 5; i++) {
		if (arr[x + i][y+i] == num) {
			temp++;
			if (temp == 6)
				break;
		}
		else {
			if (temp == 5)
				return true;
			else
				temp = 0;
		}
	}
	temp = 0;
	for (int i = -5; i <= 5; i++) {
		if (arr[x + i][y-i] == num) {
			temp++;
			if (temp == 6)
				break;
		}
		else {
			if (temp == 5)
				return true;
			else
				temp = 0;
		}
	}
	temp = 0;
	for (int i = -5; i <= 5; i++) {
		if (arr[x][y+i] == num) {
			temp++;
			if (temp == 6)
				break;
		}
		else {
			if (temp == 5)
				return true;
			else
				temp = 0;
		}
	}
	return false;
}
int main() {
	int num;
	cin >> num;
	int x, y;
	for (int i = 0; i < num; i++) {
		cin >> x >> y;
		arr[x][y] = i % 2 + 1;
		if (check(x, y, arr[x][y])) {
			cout << i + 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}