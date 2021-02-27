#include<iostream>
#include<set>
#include "pr.h"
using namespace std;
#define br "\n"
int top(const set<int> &s){
    auto it = s.rbegin();
    return *it;
}
int main(){
    ioStd();
    int T;
    cin>>T;
    int size,temp;
    for(int i=0;i<T;i++){
        int count=0;
        set<int> s;
        cin>>size;
        while(size--)
        {
            cin>>temp;
            s.insert(temp);
            if( s.size() != 1) {
                if( temp > top(s)){
                    count++;
                }
                else
                    cout<< "1" <<br;
                
            }
            else
                cout<< "2" <<br;

            // if (s.size()!=1)
            // {
            //     if (temp>top(s))
            //     {
            //         count--;
            //     }
            //     else if( temp==top(s) ) count=0; 
            // }
            // else{
            //     count++;
            // }
            
        }
            cout<< "Case #"<< i+1<< ": "<< count<<br;
        
    }
    return 0;
}
/*

4
8
1 2 0 7 2 0 2 0
6
4 8 15 16 23 42
9
3 1 4 1 5 9 2 6 5
6
9 9 9 9 9 9



Case #1: 2
Case #2: 1
Case #3: 3
Case #4: 0
*/
