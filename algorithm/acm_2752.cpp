#include<iostream>
using namespace std;
#define MAX(a,b) (a)>(b)?(a):(b)
#define MIN(a,b) (a)>(b)?(b):(a)
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int max = MAX(a, MAX(b, c));
	int min= MIN(a, MIN(b, c));
	int temp = a + b + c - max - min;
	cout << min << " " << temp << " " << max << endl;
}