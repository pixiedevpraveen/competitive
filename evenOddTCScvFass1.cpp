//Pixiedev code
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef double db;
typedef string str;

typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef pair<db,db> pd;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<db> vd;
typedef vector<str> vs;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<pd> vpd;

#define mp make_pair
#define F first
#define S second
#define sz(x) (int)(x).size()
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define pf push_front
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound
#define br "\n"

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5;
const ll INF = 1e18;
const ld PI = acos((ld)-1);

#define fs(i,a,n) for(int i=(a);i<(n);i++)
#define f(i,n) fs(i,0,n)
#define rf(i,b) for (int i = (b)-1; i >= 0; --i)
#define trav(a,x) for (auto& a: x)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

// for io from file
void ioStd();

// for descending order
bool cmp(int x,int y){ return x>y; }

template<class T> bool ckmin(T& a, const T& b) {
	return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) {
	return a < b ? a = b, 1 : 0; }

// INPUT


template<class T> void remDup(vector<T>& v) {
	sort(all(v)); v.erase(unique(all(v)),end(v)); }

// TO_STRING
#define ts to_string
str ts(char c) { return str(1,c); }
str ts(const char* s) { return (str)s; }
str ts(str s) { return s; }
template<class T>
str ts(T t){
	stringstream ss;
	ss<<t;
	// str tempSS;
	// ss>>tempSS;
	return ss.str();
}

// OUTPUT
template<class A> void pr(A x) { cout << ts(x); }
template<class H, class... T> void pr(const H& h, const T&... t) {
	pr(h); pr(t...); }
void ps() { pr("\n"); } // print w/ spaces
template<class H, class... T> void ps(const H& h, const T&... t) {
	pr(h); if (sizeof...(t)) pr(" "); ps(t...); }

void solve(){
	pr();

	pr(br);
}

int main()
{
	ioStd();
	solve();
	
	return 0;
}
void ioStd()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    // freopen("output.txt","w", stdout);
    #endif
}