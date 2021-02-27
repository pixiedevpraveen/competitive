//Pixiedev code
#include"pr.h"
using namespace std;

template<class T> T add(T t){ return t;}
template<class A, class... B>A add(const A& a, const B&... b){
	return add(a)+add(b...);}

/*void sol(){
	const int size = 3;
	array<int, size> a;
	f(i,size)
		a[i] = i+10;

	tr(it,a){
		cout<< *it<< br;
	}
}*/
zeroSSubarr(vector<int> v,int k)
{
	int found = 0;
	int sum = 0;
	set<int> set1;
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		set1.insert(sum);
		sum += *it ;
		if (set1.count(sum-k))
		{
			found += 1;
		}
	}

	return found;
}

int Subarr(int a[],int N, int k)
{
	int found = 0;
	int sum = 0;

	for (int i = 0; i < N-1; ++i)
	{
		if(a[i]+a[i+1] == k)
			found += 1;
	}

	return found;
}
void rem(int a[], int n){
	for(auto it = a; it != a+n; ++it)
		*it = 0;
}

int main()
{


	// cout<< zeroSSubarr(a)<< br;

	return 0;
}

