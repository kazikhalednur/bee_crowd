#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m, n, q, r;
	cin >> m >> n;
	r = m % n;
	if (r < 0)
		r += abs(n);
	q = (m - r ) / n;
	cout << q << ' ' << r << '\n';
	return 0;
}