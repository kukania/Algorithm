#include <string>
#include <cmath>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <list>
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;
struct stru
{
	int d;
	long long num;
};
int main()
{
	long long T, n, num, d, a, b;
	vector<stru> vec;
	stru temp;
	long long k = pow(2, 32) - 1;
	temp.d = 2;
	temp.num = 2;
	vec.push_back(temp);
	for (; temp.num <= k;)
	{
		temp.d += 2;
		temp.num += temp.d;
		vec.push_back(temp);
	}
	temp.d += 2;
	temp.num += temp.d;
	vec.push_back(temp);
	int size = vec.size();
	cin >> T;
	while (T--)
	{
		cin >> a >> b;
		n = b - a;
		for (int i = 0; i < size; i++)
		{
			if (vec[i].num >= n)
			{
				num = vec[i].num;
				d = vec[i].d;
				break;
			}
		}
		if (n > num - d / 2)
			cout << d << endl;
		else
			cout << d - 1 << endl;
	}
	return 0;
}