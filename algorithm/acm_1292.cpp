#include<iostream>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	int arr[2000] = { 0, };
	int index = 1;
	for (int i = 1; i <= 50; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			arr[index] = i;
			index++;
		}
	}
	int sum = 0;
	for (int i = x; i <= y; i++) {
		sum += arr[i];
	}
	cout << sum << endl;
	return 0;
}