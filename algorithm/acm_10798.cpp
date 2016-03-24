#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char input[5][16];
	memset(input, 0, sizeof(input));
	for (int i = 0; i < 5; i++) {
		cin >> input[i];
		for (int j = strlen(input[i]); j < 15; j++) {
			input[i][j] = '*';
		}
		input[i][15] = NULL;
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (input[j][i] == '*')
				continue;
			else
				cout << input[j][i];
		}
	}
	cout << endl;
}