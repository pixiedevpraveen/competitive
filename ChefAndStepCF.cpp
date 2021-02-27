//Pixiedev code
#include<bits/stdc++.h>
using namespace std;
#define br "\n"
void ioStd();
class ChefAndStepCF
{
public:
	void solve(){
		int ar_size, step_len, dis;
		cin>> ar_size>> step_len;
		for (int i = 0; i < ar_size; ++i)
		{
			cin>> dis;
			dis % step_len == 0? cout<< 1: cout<< 0;
		}
		cout<<br;
	}
};
int main()
{
	ioStd();

	int T;
	cin>> T;
	ChefAndStepCF C;

	while(T--)
		C.solve();

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
Sample Input
1
5 3
12 13 18 20 27216

Sample Output
10101

*/