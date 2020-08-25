///////////////////////////////////////////////////////////
// dequeSTLHRank.cpp hackerRank\practice\c++\STL\deque-STL  //
///////////////////////////////////////////////////////////
#include"pr.h"
using namespace std;
void printKMax(int arr[], int n, int k){
    deque<int> dq;
	for(int i = 0; i < n; i++)
    {
		for(;!dq.empty() && arr[i] > dq.back();)
            dq.pop_back();  
		dq.push_back(arr[i]);  
		if(i >= k && dq.front() == arr[i-k])
            dq.pop_front();  
		if(i >= k-1)
            printf(i < n-1 ? "%d ":"%d\n", dq.front());
	}
}
 
int main()
{
	// ioStd();
    int t;
    cin >> t;
    while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
	
	
	return 0;
}
/*
input:
2
5 2
3 4 6 3 4
7 4
3 4 5 8 1 4 10

output:
4 6 6 4
8 8 8 10

*/