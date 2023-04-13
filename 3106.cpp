#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, total = 0;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		total += (arr[i] / 3) * 3;
	}
	cout << total << '\n';
	return 0;
}