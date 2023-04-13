#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, p;
	string str;
	cin >> n;
	while(n--)
	{
		cin >> str;
		cin >> p;
		for(int i = 0; i < str.length(); i++)
		{
			if((str[i] - p) < 65)
				str[i] = str[i] - p + 26;
			else
				str[i] = str[i] - p;
		}
		cout << str <<'\n';
	}

	return 0;
}