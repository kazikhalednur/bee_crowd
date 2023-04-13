#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	int count;
	while(getline(cin, str))
	{
		count = 0;
		for(int i = 0; i < str.length(); i++)
		{
			if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			{
				if(count == 0)
				{
					if(str[i] >= 97 && str[i] <= 122)
						str[i] = str[i] - 32;
					count = 1;
				}
				else 
				{
					if(str[i] >= 65 && str[i] <= 90)
						str[i] = str[i] + 32;
					count = 0;
				}
			}
		}
		cout << str << endl;
	}
	return 0;
}