#include<bits/stdc++.h>
// #include <vector>
// #include "ioSTD.h"
 void ioStd()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif
}
using namespace std;
int main()
{
	ioStd();
	int n;
	long x,g=0;
	cin>> n >> x ;

	long a[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i] ;

	for (int i = 0; i < n-1; ++i)
		{
			if (a[i]+a[i+1]>x)
			{
				p = a[i] + a[i+1] - x;
				g += p;
				a[i+1] -= p;
			}
		}
		cout<< g ;
		
	return 0;
}
/*
sample input

3 3
2 2 2

sample input

1
*/