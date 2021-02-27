                ///////////////////
                //TicketsTIT.cpp //
                ///////////////////
// 20 july 2020
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
// 3 5 5 7 8
// 4 8 3
/*
void solve(int TC){
    int sz_tkt, sz_cst;
    cin>> sz_tkt>> sz_cst;
    multiset<int,
}
int main()
{
    // f();
    solve(1);
    return 0;
}*/

/*vector<int>::iterator lb(vector<int> &v,int key){
    int found = key;
    auto it = v.begin();
    for(;it != v.end(); ++it){
        if(*it==key){
            return it;
        }
        else if(*it<key){
            found=*it;
        }
        else if(*it>key){
            if(it!=v.begin())
                it--;
            break;
        }

    }
    return it;
}
*/

int main() {
    int n,q;
    cin >> n>> q;
    vector<int > v;
    int i, temp;

    for(i = 0;i<n; i++){
        cin>> temp;
        v.emplace_back(temp);
    }
    sort(v.begin(),v.end());
    int found = -1;
    for(i=0;i<q;i++){
        cin>> temp;
        auto it = lb(v,temp);
        if(it == v.end()){
            cout<<-1<<endl;
        }
        else if(*it <= temp){
            found = *it;
            v.erase(it);
            cout<< found<<endl;
        }
        else
        cout<<-1<<endl;
    }
    
    return 0;
}