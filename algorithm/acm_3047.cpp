#include<iostream>
using namespace std;
#define MAX(a,b) (a)>(b)?(a):(b)
#define MIN(a,b) (a)>(b)?(b):(a)
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int max = MAX(a, MAX(b, c));
	int min = MIN(a, MIN(b, c));
	int temp = a + b + c - max - min;
	char input[4];
	cin >> input;
	for (int i = 0; i < 3; i++) {
		switch (input[i]) {
		case 'A':
			cout << min << " ";
			break;
		case 'B':
			cout << temp << " ";
			break;
		case 'C':
			cout << max << " ";
			break;
		}
	}
	cout << endl;
}