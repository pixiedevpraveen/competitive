#include<bits/stdc++.h>
#include"pr.h"

using namespace std;
class Solution {
public:
    int lengthofLastWord(string s) {
    	int pos=0;
    if(s.empty())
    	return pos;
    else if(s.find(' ')==string::npos)
    	pos = s.length();

    else
    for(auto i = s.rbegin()+1;i< s.rend();i++)
    {
    	if(*i==' '){
	    	if(s.find("  ")!=string::npos )
	    		break;
	    	pos = i-s.rbegin();
	    	break;
    	}
    	
    }

        return pos;
    }
};

int main()
{
	ioStd();
	Solution S;
	string s = "a";
	// getline( cin, s );
	int sLast = S.lengthofLastWord(s);
	cout<< sLast ;
	
	return 0;
}