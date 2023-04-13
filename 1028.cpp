#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int x, y, z;
		cin >> x >> y;
		if(x < y)
		{
			z = x;
			x = y;
			y = z;
		}
		while(x % y != 0)
		{
			z = y;
			y = x % y;
			x = z;
		}
		cout << y << '\n';
	}
	return 0;
}