#include<iostream>
#include<list>
using namespace std;
int gcd(int a, int b) {
	int max = a > b ? a : b;
	int min = a > b ? b : a;
	int temp;
	while (max != 0 && max != min) {
		temp = max;
		max = temp - min > min ? temp - min : min;
		min = temp - min > min ? min : temp - min;
	}
	return min;
}
int main() {
	int a, b;
	cin >> a >> b;
	int g = gcd(a, b);
	list<int> res;
	for (int i = g / 2 + 1; i >= 1; i--) {
		if (g%i == 0) {
			res.push_front(i);
			if (i != g / i)
				res.push_back(g / i);
		}
	}
	res.sort();
	res.unique();
	int size = res.size();
	for (int i = 0; i < size; i++) {
		int temp = res.front();
		res.pop_front();
		cout << temp << " " << a / temp << " " << b / temp << endl;
	}
	return 0;
}