//Pixiedev code
#include<bits/stdc++.h>
using namespace std;
void ioStd()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif
}
int main()
{
	ioStd();

	int x ;
	cin>> x ;
	string n;
	set<string> s;
	while(x--)
	{
		cin >> n ;
		s.insert(n);
	}
	cout<< s.size() ;
	return 0;
}
/*
sample input

3
apple
orange
apple

sample input

2
*/