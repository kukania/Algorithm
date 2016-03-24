#include<iostream>
using namespace std;
int arr[5];
int main() {
	int input;
	cin >> input;
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i <=input; i++) {
		arr[i%3] = arr[(i - 1)%3] + arr[(i - 2)%3];
		arr[i % 3] %= 10;
	}
	cout << arr[input % 3] << endl;
	return 0;
}