// main.cpp
//Pixiedev code
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
           int size = digits.size();
           std::vector<int> v;
           int num=digits.at(0);
           for (int i = 1; i < size; ++i)
           {
           	num*=10;
           	num+=digits.at(i);
           }
           num++;
           while(num)
           {
           	v.emplace_back(num%10);
           	num/=10;
           }
           reverse(v.begin(),v.end());
           return v; 
    }
};
// [7,2,8,5,0,9,1,2,9,5,3,6,6,7,3,2,8,4,3,7,9,5,7,7,4,7,4,9,4,7,0,1,1,1,7,4,0,0,6]
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
	std::vector<int> v;
	int num;
	while(cin>> num ) v.emplace_back(num);

	Solution s;
	v = s.plusOne(v);
	for(int x : v)
		cout<< x << " " ;

	return 0;
}