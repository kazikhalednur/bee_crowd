#include<bits/stdc++.h>
using namespace std;

int main()
{
	double m, n, p;
	cin >> m >> n;
	p = ceil(n/abs(m-n));
	cout << p <<'\n';
	return 0;
}