#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	long total;
	while ((cin >> a >> b >> c) && a && b && c)
	{
		total = a * b * c;
		cout << floor(cbrt(total)) << '\n';
	}
	return 0;
}