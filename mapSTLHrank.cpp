// mapSTLHrank.cpp
#include<bits/stdc++.h>
using namespace std;


int main() 
{
    map<string,int> pr;
    map<string,int>::iterator itr;
    int q,type,value;
    string name;
    cin>>q;
    while(q != 0)
    {
        cin>>type;
        if(x==1)
        {
	    	cin>>name;
	        cin>>value;
	        pr[name] += value;
	        	
	    }
        else if(x==2)
        {
            cin>>name;
            pr[name] = 0;

        }
        else if(x==3)
        {
        	cin>>name;
            itr = pr.find(name);
            if(itr == pr.end())
                cout<<0<<endl;
            else
                cout<<itr->second<<endl;
        }
        
      q--;  
    }
    return 0;
}