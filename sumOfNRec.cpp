#include<iostream>
#include "pr.h"
 int sumOfN(int n)
 {
 	int sum=n;
 	if(n>0)
 		sum += sumOfN(n-1);
 	return sum;
 }
using namespace std;
int main()
{
	// ioStd();
	int n;
	// cin>> n ;
	n = digN(3456);
	// n = sumOfN(n);
	cout<< "sum is: " << n ;
	// cin.get();
	// cin.get();
	return 0;
}