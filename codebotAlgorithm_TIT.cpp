// codebotAlgorithm_TIT.cpp
#include<bits/stdc++.h>
using namespace std;
void ioStd();

int main(){

	ioStd();

    string in;
    int rw, temp;

    vector<int> vv[5];
    try{
    for (int i = 0; getline(cin, in);i++)
    {
        stringstream ss(in);
        while(ss>>temp){
            vv[i].emplace_back(temp);
        }
        ss.clear();
        rw++;

        cin>> ws;
    }
    	
    }
    catch(...){
    	// cout<< "pr";
    }
    int clm = vv[0].size();
    int cst=0;
    for(int i=0; i<clm; i++){
        for(int j=0; j<clm; j++){
            if(vv[j][i]!=0)
                cst+=vv[j][i];

            else
                break;
        }
    }
    cout<< cst;

    return 0;
}

void ioStd()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    #endif
}
/*

[Input]

0 1 1 2
0 5 0 0
2 0 3 3

[output]
9

A 2-dimensional array of integers representing s rectangular matrix of the building.

Guaranteed constraints:
1 <= matrix.length <= 5,
1 <= matrix[i].length <= 5,
1 <= matrix[i][j] <= 10.


 */
    /*char c;
    for(rw=0;rw<5;rw++)
	{
		while(scanf("%d%c",&temp,&c)){
			vv[rw].emplace_back(temp);
			if(c=='\n')
				break;
		}
	}*/