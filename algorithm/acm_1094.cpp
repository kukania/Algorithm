#include<iostream>
using namespace std;
int main() {
	int arr[] = { 64,32,16,8,4,2,1 };
	int num;
	cin >> num;
	int cnt = 0;
	for (int i = 0; i < 7; i++) {
		if (num >=arr[i]) {
			cnt++;
			num -= arr[i];
		}
		if (num == 0)
			break;
	}
	cout << cnt<<endl;
}