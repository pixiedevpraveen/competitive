//Pixiedev code
#include<bits/stdc++.h>
using namespace std;
#define fs(i,a,n) for(int i=(a);i<(n);i++)
#define f(i,n) fs(i,0,n)
#define trav(a,x) for (auto& a: x)
#define eb emplace_back
#define pob pop_back
#define mp make_pair
#define F first
#define S second
#define br "\n"
void ioStd();
void solve(const int &T){
	int p,q;
	cin>> p>> q;
	fs(i,p,q)
	{
		if( i == 0) cout<< 1<<" ";
		if( i == 1) cout<< 5<<" ";
	}
}
int main()
{
	
	ioStd();
	int T;
	cin>> T;
	f(i,T){
		solve(i+1);
		cout<< br;
	}
	
	return 0;
}
void ioStd()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	// freopen("output.txt","w", stdout);
	#endif
}
/*
input:
1
1 2

output:
5 10

*/