#include<iostream>
using namespace std;
struct Content {
	int zero;
	int one;
};
int main() {
	int testCase;
	Content arr[41];
	arr[0].zero = 1;
	arr[0].one = 0;
	arr[1].zero = 0;
	arr[1].one = 1;
	for (int i = 2; i < 41; i++) {
		arr[i].one = arr[i - 1].one + arr[i - 2].one;
		arr[i].zero = arr[i - 1].zero + arr[i - 2].zero;
	}
	cin >> testCase;
	int input;
	for (int i = 0; i < testCase; i++) {
		cin >> input;
		cout << arr[input].zero << " " << arr[input].one << endl;
	}
	return 0;
}