#include<iostream>
using namespace std;
int main() {
	int nx, ny, rx, ry;
	cin >> nx >> ny >> rx >> ry;
	int num1 = rx - nx;
	int num2 = ry - ny;
	int result = num1 > num2 ? num2 : num1;
	int result2 = nx > ny ? ny : nx;
	cout << (result > result2 ? result2 : result) << endl;
	return 0;
}