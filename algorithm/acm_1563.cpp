#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int input;
	cin >> input;
	int arr[1001][6];//o,a,aa,l,la,laa
	memset(arr, 0, sizeof(arr));
	arr[1][0] = 1;
	arr[1][1] = 1;
	arr[1][2] = 0;
	arr[1][3] = 1;
	arr[1][4] = 0;
	arr[1][5] = 0;
	for (int i = 2; i < 1001; i++) {
		arr[i][0] = arr[i - 1][0] + arr[i - 1][1] + arr[i - 1][2];
		arr[i][1] = arr[i - 1][0];
		arr[i][2] = arr[i - 1][1];
		arr[i][3] = arr[i - 1][0] + arr[i - 1][1] + arr[i - 1][2]+arr[i-1][3]+arr[i-1][4]+arr[i-1][5];
		arr[i][4] = arr[i - 1][3];
		arr[i][5] = arr[i - 1][4];
		for (int j = 0; j < 6; j++) {
			arr[i][j] %= 1000000;
		}
	}
	int sum = 0;
	for (int i = 0; i < 6; i++) {
		sum += arr[input][i] % 1000000;
	}
	sum %= 1000000;
	cout << sum << endl;
	return 0;
}