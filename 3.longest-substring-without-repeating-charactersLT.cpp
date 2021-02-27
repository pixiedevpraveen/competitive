//Pixiedev code
#include<bits/stdc++.h>
using namespace std;
string substr(string ,int ,int );
class Solution {
public:
string substr(string s,int l,int r)
{
	string ans="";
	while(l<r)
	{
		ans += s.at(l);
		l++;
	}
	return ans;
}
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        for (int i = 0; i < n; ++i)
        {
        	 for (int j = i+1; j < n; ++j)
        	 {
        	 	s
        	 }
        }
        return 0;
    }

};

int main()
{
	Solution S;
	string s = "abcabcbb";
	// int ans = S.lengthOfLongestSubstring(s);
	string ans = S.substr(s,0,3);
	cout<< ans ;
	cin.get();
	
	return 0;
}
/*
"abcabcbb"
"bbbbb"
"pwwkew"


3 -> abc
1 -> b
3 -> wke


*/