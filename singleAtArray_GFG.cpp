#include<iostream>
using namespace std;

int singleAtArray(int ar[], int size){
	int ans = ar[0];
	for (int i = 1; i < size; ++i)
	{
		ans = ans^ar[i]; 
	}
	return ans;
}
int main()
{
	int size;
	size = 7;

	int ar[size] = {6,8,5,4,5,6,4};

	cout<< singleAtArray(ar,size);

	return 0;
}