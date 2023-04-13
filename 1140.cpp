#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	bool check = true, check1 = false;
	int len;
	char ch;
	while(getline(cin, str) && str != "*")
	{
		ch=str[0];
		check = true;
		check1 = false;
		len = str.length();
		for(int i = 1; i < len; i++)
		{
			if(str[i] == ' ')
				check1 = true;
			if(check1)
			{
				if(i+1 == len)
					break;
				if((str[i+1] == ch) || (str[i+1] - 32 == ch) || (str[i+1] + 32 == ch))
					{}
				else
					check = false;
				check1 = false;
			}
		}
		if(check)
			cout << 'Y' << '\n';
		else
			cout << 'N' << '\n';
	}
	return 0;
}