#include<bits/stdc++.h>

// #include <algorithm>
using namespace std;
class Solution {
public:
int searchInsert(vector<int>& nums) 
{
        
    int max_so_far = INT_MIN, max_ending_here = 0; 
  	int size = nums.size();
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + nums.at(i); 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
}

    
};
int main()
{
	Solution s;
	
	vector<int > v {-2,-3,1,-4,5,-3,2};
	cout<< "Before fn call: \n" ;
	for (int x:v)
		cout<< x <<" " ;
	int size = s.searchInsert(v);
	cout<< "\n ans= "<< size << "\n" ;
	// cout<< "After fn call: \n" ;
	// for (int x:v)
		// cout<< x <<" " ;
	cin.get();

    return 0;
}
