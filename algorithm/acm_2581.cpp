#include<iostream>
using namespace std;
bool isPrime(int n)
{
	if (n <= 1)
		return false; //1�� �Ҽ��� �ƴϴ�.

	if ((n & 1) == 0) //¦����
		return (n == 2); //2�̸� true �ƴϸ� �Ҽ��ƴϴ�

	for (int i = 3; i*i <= n; i++)
	{ // i = 3 ~ sqrt(n) ������ Ȧ��
		if (n % i == 0)
		{//i�� n�� ������
			return false; //�������. �Ҽ��ƴϴ�.
		}
	}
	return true; //�Ҽ��̴�   
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