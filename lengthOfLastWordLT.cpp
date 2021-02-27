#include<bits/stdc++.h>
#include"pr.h"

using namespace std;
class Solution {
public:
    int lengthofLastWord(string s) {
    	if(s.length() == 0)
            return 0;
 
        int ans = 0;
        int len = s.length();
     
        bool f = false;
        for(int i=len-1; i>=0; i--){
            char c = s.at(i);
            if((c>='a' && c<='z') || (c>='A' && c<='Z')){
                f = true;
                ans++;
            }else{
                if(f)
                    return ans;
            }
        }
     
        return ans;
    }
};

int main()
{
	// ioStd();
	Solution S;
	string s = "a ";
	// getline( cin, s );
	int sLast = S.lengthofLastWord(s);
	cout<< sLast ;
	
	return 0;
}