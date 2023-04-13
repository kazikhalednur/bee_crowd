#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m, n, r, s;
	cin >> m >> n;
	r = (m * n) + ((m - 1) * (n - 1));
	s = (m + n - 2) * 2;
	cout << r <<'\n' << s << '\n';
	return 0;
}