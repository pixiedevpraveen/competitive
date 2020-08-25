// PixieDev code
// seiveOfEratoSthenes prime algorithm (fast) sqrt algorithm
#include<iostream>
#include<algorithm>
//#include "pr.h"
using namespace std;

bool* seiveOfEratoSthenes(int n) {

	bool* isPrime = new bool[n+1];
	fill(isPrime, (isPrime+n+1), true);

	isPrime[0] = false;
	isPrime[1] = false;

	for (int i = 2; i*i <= n; ++i) {

		for (int j = 2*i; j <= n; j += i) {

			isPrime[j] = false;
		}
	}

	return isPrime;
}
int main()
{
	//ioStd();
	int no = 12;
	bool* ar = seiveOfEratoSthenes(no);
	
	for (int i = 0; i <= no; ++i)
	{
		cout<< i<< "\t"<< ar[i]<< endl;
	}

	return 0;
}