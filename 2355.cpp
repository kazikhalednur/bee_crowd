#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long x;
	double y;
	int z, t;
	while ((cin >> x) && x)
	{
		y = (double)(x) / 90.0;
		z = floor(y);
		t = ceil(y * 7);
		cout << "Brasil " << z << " x Alemanha " << t << '\n';
	}
	return 0;
}