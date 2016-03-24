#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double input;
	cin >> input;
	double d;
	d = 1 + 8 * input;
	int	y = (-1 + sqrt(d)) / 2;
	cout << y << endl;
	return 0;
}