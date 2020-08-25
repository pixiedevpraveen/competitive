#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
// void ioStd();
#define br "\n"
int main() {
    ios_base::sync_with_stdio(0);
    // ioStd();
    int T;
    cin>> T ;
    int ctr;
    string s1,s2;
    for (int p = 0; p < T; ++p)
    {
    	cin>> ctr ;
	    cin>> s1>> s2;
    	cout<< "Case #" << p+1<<": "<< br;
    	int half=0,k=0;

    	int s_size = s1.length();
    	for (int i = 0; i < s_size; ++i)
    	{
    		for (int j = 0; j < s_size; ++j)
			{
				if (i==j)
				{
					cout<< 'Y';
				}
				else if((abs(i-j)==1) and (s1.at(j)=='Y') and (s2.at(i)=='Y'))
					cout<< 'Y';
				else 
				{
                        if((s1.at(j)=='Y') and (s2.at(i)=='Y')){
                            half=0;
                            if(i>j){
                            k=i-1;
                            while(k>j){
                                if((s1.at(k)=='N') or (s2.at(k)=='N')){
                                    half=1;
                                    break;
                                }
                                k--;
                            }
                            }
                            else{
                                k=i+1;
                                while(k<j){
                                if((s1.at(k)=='N') or (s2.at(k)=='N')){
                                    half=1;
                                    break;
                                }
                                k++;
                            }
                            }
                            if(half==0)
                                cout<< 'Y';
                            
                            else
                                cout<< 'N';
                            
                        }
                        else
                        	cout<< 'N';
                        
                    }
			}
	    	cout<<br;
    	}
    }


    return 0;
}
// void ioStd()
// {
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt","r", stdin);
// 	freopen("output.txt","w", stdout);
// 	#endif
// }
/*

5
2
YY
YY
2
NY
YY
2
NN
YY
5
YNNYY
YYYNY
10
NYYYNNYYYY
YYNYYNYYNY




Case #1: 
YY
YY
Case #2: 
YY
NY
Case #3: 
YN
NY
Case #4: 
YNNNN
YYNNN
NNYYN
NNNYN
NNNYY
Case #5: 
YYYNNNNNNN
NYYNNNNNNN
NNYNNNNNNN
NNYYNNNNNN
NNYYYNNNNN
NNNNNYNNNN
NNNNNNYYYN
NNNNNNYYYN
NNNNNNNNYN
NNNNNNNNYY

*/