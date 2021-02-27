
#include <iostream>
#include <set>
// #include <algorithm>
using namespace std;


int main() {
    set <int > p;
    int N,x,q;
    cin>>N;
    while(N--)
    {
            cin>>x>>q;
        if(x==1)
        p.insert(q);

        else if(x==2)
        {
            if(p.find(q)!=p.end())
            p.erase(q);
        }

        else if(x==3)
        {
            set<int>::iterator ip = p.find(q);
            if(ip!=p.end())
            cout<<"Yes\n";
            else
            cout<<"No\n";
        }
    }

    return 0;
}
/*
input:

8
1 9
1 6
1 10
1 4
3 6
3 14
2 6
3 6

output:

Yes
No
No
*/