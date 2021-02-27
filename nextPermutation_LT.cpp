// nextPermutation_LT.cpp
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool possible = next_permutation(nums.begin(),nums.end());
        if(!possible){
        	sort(nums.begin(), nums.end());
        }
    }
};

int main()
{
	// ioStd();
	Solution S;
	std::vector<int> nums;
	nums.emplace_back(1);
	nums.emplace_back(2);
	nums.emplace_back(3);

	S.nextPermutation(nums);

	for (auto it = nums.begin(); it != nums.end(); ++it)
		cout<<*it<<" ";
	
	return 0;
}