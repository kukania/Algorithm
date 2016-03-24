#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
int main()
{
	vector<int> a;
	int n;
	scanf("%d", &n);
	int k;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k);
		a.push_back(k);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++)
		printf("%d\n", a[i]);
	return 0;
}