#include<bits/stdc++.h>

// #include <algorithm>
using namespace std;
class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
        
        auto it = lower_bound(nums.begin(),nums.end(),target);

        return it-nums.begin();
    }
    
    
};
int main()
{
	Solution s;
	
	vector<int > v {1,2,2,3,2};
	cout<< "Before fn call: \n" ;
	for (int x:v)
		cout<< x <<" " ;
	int size = s.searchInsert(v,0);
	cout<< "\n"<< size << "\n" ;
	cout<< "After fn call: \n" ;
	for (int x:v)
		cout<< x <<" " ;
	cin.get();

    return 0;
}
