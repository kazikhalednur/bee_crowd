#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long x, y, q, r;
	long total, carry;
	while (1)
	{
		cin >> x >> y;
		if(x ==0 && y == 0) break;
		total = 0;
		carry = 0;
		while (1)
		{
			q = x % 10;
			r = y % 10;
			x /= 10;
			y /= 10;
			if (q + r + carry >= 10)
			{
				total++;
				carry = 1;
			}
			else
				carry = 0;
			if(x ==0 && y == 0) break;
		}
		if (total == 0)
			cout << "No carry operation.\n";
		else if (total == 1)
			cout << "1 carry operation.\n";
		else
			cout << total << " carry operations.\n";
	}
	return 0;
}