#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, p, q;
	string str;
	cin >> n;
	getline(cin, str);
	while(n--)
	{
		getline(cin, str);
		p = str.length() / 2;
		q = str.length();
		for(int i = p-1; i > -1; i--)
			cout << str[i];
		for(int i = q-1; i > p-1; i--)
			cout << str[i];
		cout <<'\n';
	}
	return 0;
}