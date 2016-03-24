#include<iostream>
using namespace std;
bool isPrime(int n)
{
	if (n <= 1)
		return false; //1은 소수가 아니다.

	if ((n & 1) == 0) //짝수는
		return (n == 2); //2이면 true 아니면 소수아니다

	for (int i = 3; i*i <= n; i++)
	{ // i = 3 ~ sqrt(n) 까지의 홀수
		if (n % i == 0)
		{//i가 n의 약수라면
			return false; //약수존재. 소수아니다.
		}
	}
	return true; //소수이다   
}
int main() {
	int a, b;
	cin >> a >> b;
	int sum = 0;
	int min = 100000;
	for (int i = a; i <= b; i++) {
		if (isPrime(i)) {
			sum += i;
			if (min > i)
				min = i;
		}
	}
	cout << sum << endl << min << endl;
	return 0;
}