#include<iostream>
using namespace std;

int main()
{
	int max, max1;
	string str1, str2;
	getline(cin,str1);
	while(getline(cin,str2))
	{
		max = 0, max1 = 0;
		for(int i = 0; i < str1.length(); i++)
		{
			for(int j = 0; j < str2.length(); j++)
			{
				if (str1[i] == str2[j])
				{
					max1 = 0;
					for(int k = j, l = i; k < str2.length(), l < str1.length(); k++,l++)
					{
						if(str2[k]!=str1[l])
                        	break;
                        max1++;
					}
				}
				if(max < max1)
					max = max1;
			}
		}
		cout<<max<<endl;
		getline(cin,str1);
	}
}