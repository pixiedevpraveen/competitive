// toLowerCase_LT.cpp
#include<iostream>
using namespace std;
class Solution {
public:
    string toLowerCase(string str) {
    	const int x = 32;
     	for (auto it = str.begin(); it != str.end(); ++it){
     	   	if( *it>='A' and *it <='Z')
	     	   	*it = *it|x;    
     	}
	    return str;
    }
    /*
    string toUpperCase(string str) {
    	const int x = 32;
     	for (auto it = str.begin(); it != str.end(); ++it){
     		if( *it>='a' and *it <='z')
		        *it = *it & ~x;
     	}

	    return str;
    }*/
};
int main()
{
	// ioStd();
	Solution S;
	string s = "Hello";
	// getline( cin, s );
	string ans = S.toLowerCase(s);
	cout<< ans ;
	
	return 0;
}