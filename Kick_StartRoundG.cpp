//Pixiedev code
#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int getRand(int l, int r)
{
	uniform_int_distribution<int> uid(l, r);
	return uid(rng);
}

#define int long long
#define pb push_back
#define S second
#define F first
#define f(i, n) for (int i = 0; i < n; i++)
#define fast                      \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0)
#define vi vector<int>
#define pii pair<int, int>
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define precise(x) fixed << setprecision(x)

const int MOD = 1e9 + 7;

int mod_pow(int a, int b, int M = MOD)
{
	int res = 1;

	while (b)
	{
		if (b & 1)
			res = (res * a) % M;
		a = (a * a) % M;
		b >>= 1;
	}

	return res;
}

void solve()
{
	string s;
	cin >> s;

	int n = s.length();

	vi pref(n, 0);

	string p = "START";

	for (int i = n - 5; i >= 0; i--)
	{
		if (s.substr(i, 5) == p)
			pref[i]++;
		pref[i] += pref[i + 1];
	}

	int res = 0;

	for (int i = 0; i < n - 3; i++)
	{
		if (s.substr(i, 4) == "KICK")
			res += pref[i];
	}

	cout << res << '\n';
}

signed main()
{
	fast;

	int t = 1;

	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cout << "Case #" << i << ": ";
		solve();
	}
}

/*
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
	return ss.str();
}

// OUTPUT
template<class A> void pr(A x) { cout << ts(x); }
template<class H, class... T> void pr(const H& h, const T&... t) {
	pr(h); pr(t...); }
void ps() { pr("\n"); } // print w/ spaces
template<class H, class... T> void ps(const H& h, const T&... t) {
	pr(h); if (sizeof...(t)) pr(" "); ps(t...); }

	void ioStd()
{
    #ifndef ONLINE_JUDGE
    freopen("D:/cc/input.txt","r", stdin);
    // freopen("D:/cc/output.txt","w", stdout);
    #endif
}

void solve(int tc){
	// solution code
	string s;
	cin>> s;
	auto ans =0;
	if( tc == 0 )
		ans = 3;
	else if( tc == 1 )
		ans = 0;
	else if( tc == 2 )
		ans = 5; 
	cout<< ans<< endl;
}

int main()
{
	ioStd();
	int TC;
	cin>> TC;
	f(i,TC){
		pr("Case #",i+1,": ");
		solve(i);
	}
	
	return 0;
}
 */