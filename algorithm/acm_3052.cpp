#include<iostream>
using namespace std;
int arr[50];
int main() {
	for (int i = 0; i < 10; i++) {
		int temp;
		cin >> temp;
		arr[temp % 42]++;
	}
	int cnt = 0;
	for (int i = 0; i < 50; i++) {
		if (arr[i])
			cnt++;
	}
	cout << cnt << endl;
}