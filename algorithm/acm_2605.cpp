#include<iostream>
#include<list>
using namespace std;
int main() {
	int input;
	cin >> input;
	int temp;
	list <int> arr;
	for (int i = 0; i < input; i++) {
		cin >> temp;
		list <int>::iterator li;
		li = arr.end();
		for (int j = 0; j < temp; j++)
			li--;
		arr.insert(li, i+1);
	}
	for (list<int>::iterator li = arr.begin(); li != arr.end(); li++)
		cout << *li << " ";
	cout << endl;
	return 0;
}