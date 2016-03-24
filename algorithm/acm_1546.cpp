#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int num;
	cin >> num;
	vector<double> arr;
	arr.assign(num, 0);
	for (int i = 0; i < num; i++)
		cin >> arr[i];
	sort(arr.begin(), arr.end());
	double max = arr[num - 1];
	double sum = 0;
	for (int i = 0; i < num; i++) {
		sum += (double)((double)(arr[i] * 100 / max));
	}
	printf("%.2f\n", sum / num);
}