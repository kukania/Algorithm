#include<iostream>
using namespace std;
int arr[101];
int main() {
	int input1, input2;
	cin >> input1 >> input2;
	int temp = (input1*input1) % input2;
	while (1) {
		if (arr[temp] == 0)
			arr[temp]++;
		else
			break;
		temp = (temp*input1) % input2;
	}
	int cnt = 0;
	for (int i = 0; i < 100; i++)
		if (arr[i])
			cnt++;
	cout << cnt << endl;
	return 0;
}