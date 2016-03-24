#include<iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	double temp = 5;
	int index = 1;
	int arr[20];
	int arr2[40];
	while (temp <= 2000000000) {
		arr[index] = temp;
		index++;
		temp *= 5;
	}
	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	for (int i = 1; i < index; i++) {
		cnt1 += n / arr[i];
		cnt2 += m / arr[i];
		cnt3 += (n - m) / arr[i];
	}
	index = 1;
	temp = 2;
	while (temp <= 2000000000) {
		arr2[index] = temp;
		index++;
		temp *= 2;
	}
	int cnt_1 = 0, cnt_2 = 0, cnt_3 = 0;
	for (int i = 1; i < index; i++) {
		cnt_1 += n / arr2[i];
		cnt_2 += m / arr2[i];
		cnt_3 += (n - m) / arr2[i];
	}
	int temp1 = cnt1 - cnt2 - cnt3;
	int temp2 = cnt_1 - cnt_2 - cnt_3;
	cout << (temp1 > temp2 ? temp2 : temp1) << endl;
	return 0;
}