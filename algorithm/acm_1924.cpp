#include<iostream>
#include<string>
using namespace std;
int main() {
	string day[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int month[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int mon, date;
	cin >> mon >> date;
	int sum = 0;
	for (int i = 0; i < mon; i++) {
		sum += month[i];
	}
	sum += date;
	cout << day[sum % 7] << endl;
	return 0;
}