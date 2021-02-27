#include<iostream>
#include"pr.h"

using namespace std;
class Solution {
public:
    int myAtoi(string str) {
        int num=0;
        stringstream s(str);
        s>>num;
        return num;
    }
};

int main()
{
	ioStd();
	Solution S;
	string str = "1234sd";
	auto ans = S.myAtoi(str);
	cout <<"."<<ans <<".";
	return 0;
}