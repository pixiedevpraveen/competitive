// permutationTIT.cpp
// 23 july 2020
#include <iostream>
using namespace std;
// To find max sum of permutation 
int maxSum(int n) 
{ 
    // Base case 
    if (n == 1) 
        return 1; 
  
    // Otherwise max sum will 
    // be (n*(n-1)/2) - 1 + n/2 
    else
        return (n * (n - 1) / 2) - 1 + n / 2; 
} 
int main()
{
	int num = 4;
	// cin>> num ;
  	cout<< maxSum(num);

	return 0;
}