#include<iostream>
using namespace std;
int binarySearch(long a[],int low,int high,int key)
{
   while(low<=high)
   {
     int mid=(low+high)/2;
     if(a[mid]<key)
     {
         low=mid+1;
     }
     else if(a[mid]>key)
     {
         high=mid-1;
     }
     else
     {
         return mid;
     }
   }
   return -1;                //key not found
 }

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif

	int index_ar,index_qr;
	cin>> index_ar ;
	long ar[index_ar];
	for (int i = 0; i < index_ar; ++i){
		cin>> ar[i] ;
		// cout<< ar[i];
	}

	cin>> index_qr ;
	long qr[index_qr];
	int found;
	for (int i = 0; i < index_qr; i++){
		cin>> qr[i] ;
		cout<<qr[i]<<" ";
	}
	
	for (int i = 0; i < index_qr; ++i)
	{
		found = binarySearch( ar, 0, index_ar-1, qr[i]);
		cout<< found+1 << "\n" ;
	}

	return 0;
}