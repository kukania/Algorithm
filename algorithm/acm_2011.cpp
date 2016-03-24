#include<iostream>
#include<string>
#include<vector>
#include<string.h>
using namespace std;
int main() {
	string input;
	cin >> input;
	int arr[5001];
	memset(arr, 0, sizeof(arr));
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i <=input.size(); i++) {
		int temp = i-1;
		if ((input[temp - 1] == '1' && input[temp]!='0')||(input[temp-1]=='2' &&(input[temp]>='1' && input[temp]<='6'))) {
			arr[i] += arr[i - 2] % 1000000;
			arr[i] += arr[i - 1] % 1000000;
		}
		else if (input[temp] == '0')
			arr[i] += arr[i - 2] % 1000000;
		else if (input[temp - 1] == '0')
			arr[i] += arr[i - 1] % 1000000;
		else
			arr[i] += arr[i - 1] % 1000000;
	}
	cout << arr[input.size()]%1000000 << endl;
	return 0;
}