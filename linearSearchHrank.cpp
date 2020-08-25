// Pixiedev code
#include<bits/stdc++.h>
//header
using namespace std;
//class/function
int main()
{
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif

	
	int arr_index, srNum, found=-1;

	cin >> arr_index >> srNum ;
	int arr[arr_index];
	int i=0;
	while(i<arr_index)
	{
	cin >> arr[i];
	if(arr[i]==srNum)
		found=i+1;
		i++;
	}
	cout<< found ;
	 
	
	return 0;
}