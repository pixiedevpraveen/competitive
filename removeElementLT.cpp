#include<bits/stdc++.h>

// #include <algorithm>
using namespace std;
int remove(vector<int>& nums,int val) {
        // int size;
       while(find(nums.begin(),nums.end(),val)!=nums.end())
       	nums.erase(find(nums.begin(),nums.end(),val));
       
        return nums.size();
    }/*int remove(vector<int>& nums,int val) {
        // int size;
        auto it = nums.begin();
        while(it!=nums.end())
        {
        	if(*it==val)
        		nums.erase(it);
        	it++;
        }
        return nums.size();
    }*/
void ioStd()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif
}
int main()
{
	
	ioStd();

	vector<int > v {0,1,2,2,3,0,4,2};
	cout<< "Before fn call: \n" ;
	for (int x:v)
		cout<< x <<" " ;
	int size = remove(v,2);
	cout<< "\n"<< size << "\n" ;
	cout<< "After fn call: \n" ;
	for (int x:v)
		cout<< x <<" " ;
	cin.get();

    return 0;
}
