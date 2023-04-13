#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m, n, q, r, res;
	cin >> m >> n >> q >> r;
	res = abs((m + q) - (n + r));
	if (res > abs((m + n) - (q + r)))
		res = abs((m + n) - (q + r));
	if (res > abs((m + r) - (q + n)))
		res = abs((m + r) - (q + n));
	cout << res << endl;
	return 0;
}