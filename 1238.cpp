#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		string str1, str2;
		int len, len1, len2;
		cin >> str1 >> str2;
		len1 = str1.length();
		len2 = str2.length();
		len = len1;
		if(len < len2) len = len2;
		for(int i = 0; i < len; i++)
		{
			if(i < len1) cout << str1[i];
			if(i < len2) cout << str2[i];
		}
		cout << "\n";
	}
}