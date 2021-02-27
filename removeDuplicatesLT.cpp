#include<bits/stdc++.h>

// #include <algorithm>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int count;
        set<int> p;
        for(int x : nums)
            p.insert(x);
        
            nums.clear();
        for(int x : p)
            nums.emplace_back(x);
        
        int size = nums.size();
            
        return size;
    }
    
};
int main()
{
	Solution s;
	
	vector<int > v {0,1,2,2,3,0,4,2};
	cout<< "Before fn call: \n" ;
	for (int x:v)
		cout<< x <<" " ;
	int size = s.removeDuplicates(v);
	cout<< "\n"<< size << "\n" ;
	cout<< "After fn call: \n" ;
	for (int x:v)
		cout<< x <<" " ;
	cin.get();

    return 0;
}
