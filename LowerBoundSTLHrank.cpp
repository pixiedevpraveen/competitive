// LowerBoundSTLHrank.cpp
// Pixiedev code
#include<bits/stdc++.h>
//header
using namespace std;

int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif

	int T,Q;	 
	int x;
	cin>> T ;
	vector <int > v;
	while(T--){
		cin>> x ;
		v.push_back(x);
	}
	cin>> Q ;
		for (int i = 0; i < Q; ++i)
		{
		cin>> x ;
		auto l = lower_bound(v.begin(),v.end(),x);
		// vector<int>::iterator l;
		if(binary_search(v.begin(),v.end(),x))
			cout<< "Yes " ;
		else cout<< "No " ;
		cout<< l-v.begin()+1 << "\n" ;
		}

	return 0;
}