#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, total = 0;
	unsigned long long m;
	while (cin >> n >> m)
	{
		total = 0;
		while (m)
		{
			total += m % 10;
			m /= 10;
		}
		cout << total;
		if(total % 3 ==0)
			cout << " sim\n";
		else
			cout << " nao\n";
	}
	return 0;
}