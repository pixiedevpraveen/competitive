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

#define f(i,b) for (int i = 0; i < (b); ++i)
#define rf(i,b) for (int i = (b)-1; i >= 0; --i)
#define trav(a,x) for (auto& a: x)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

const int MOD = 1e9+7; // 998244353;
const int MX = 2e5+5;
const ll INF = 1e18;
const ld PI = acos((ld)-1);

// function dec.
void ioStd();

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


void inVpi(vpi &v){
    int tempIn;
    tr(it, v)
    {
        cin>> tempIn;
        it->F = tempIn;
        cin>> tempIn;
        it->S = tempIn;
    }
}

void solvePr(int tc)
{
    int n;
    cin>> n;
    string s;
    cin>> s ;
    vi v(2);
    trav(x, s)
        v[x-'A']++;

    if( abs(v[0] - v[1]) != 1 )
        cout<< 'N' <<br;

    else
        cout<< 'Y' <<br;
}
int main() {
    ios_base::sync_with_stdio(0);
    ioStd();
    int TC;
    cin>> TC ;
    int i;
    f(i,TC){
        pr("Case #",i+1,": ");
        solvePr(i+1);
    }

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
Problem B: Alchemy
15 points
Problem
My Submissions
Edgar and his younger brother Alfred are alchemists in search of the legendary Philosopher's Stone. The Philosopher's Stone (also known as the Red Stone, the Fifth Element, and the Elixir of Life in liquid form) is a powerful alchemical substance rumoured to support the transmutation of silver, gold, and even human lives. Edgar is hoping to use the stone to restore his brother's body to its original form following a terrifying human transmutation accident.
It is known that Philosopher's Stones break apart into an odd number of shards when they're used up. After searching far and wide, Edgar has collected NN shards of what he believes to be a previously-used Philosopher's Stone, where NN is an odd integer. He believes that fusing these shards back together will yield a real stone in its entirety.
Leveraging his encyclopedic knowledge of alchemy, Edgar recalls an ancient book with the following ritual for fusing shards:
Arrange the NN shards in a row, numbered from 1 to NN.
Note the colour C_iC 
i
​     of each shard ii, which is either auburn or black (denoted by the characters "A" and "B" respectively).
Choose a consecutive sequence of three shards, remove them from the row, and fuse them together into one new shard. The three shards must not all be the same colour, or such an intense concentration of similar energies will cause a dangerous rebound explosion. Instead, there must be two differently-coloured shards that will neutralize each other, get converted into energy (via the Law of Equivalent Exchange), and become infused with the third shard. In other words, assuming no explosion, the resulting shard's colour will be equal to the most common colour present amongst the three chosen shards.
Place the resulting shard back into the original gap in the row, with the remaining shards in the same relative order before and after it.
Repeat steps 3 and 4 until only one shard remains.
Note that each time steps 3 and 4 are performed, the number of remaining shards decreases by 2. Therefore, given that the initial number of shards is odd, enough successful repetitions will result in exactly one final shard: the Philosopher's Stone. Help Edgar determine whether or not it's possible to get to that point and hopefully save Alfred, without causing any rebound explosions along the way.
Input
Input begins with an integer TT, the number of Philosopher's Stones that Edgar tries to reconstitute. For each stone there are two lines. The first contains the integer NN. The second contains the length-NN string C_{1..N}C 
1..N
​    .
Output
For the iith stone, output a line containing "Case #i: " followed by a single character, either "Y" if it's possible For Edgar to end up with the Philosopher's Stone, or "N" if not.
Constraints
1 \le T \le 951≤T≤95
3 \le N \le 99,9993≤N≤99,999
NN is odd
C_i \in \{A, B\}C 
i
​    ∈{A,B}
The sum of NN over all test cases is at most 1,000,000.
Explanation of Sample
In the first case, Edgar is able to fuse the three shards together, as they include two differently-coloured shards, yielding a single black-coloured shard: the Philosopher's Stone.
In the second case, the three black shards will inevitably cause a rebound explosion if fused.
In the third case, Edgar can begin by fusing the first three shards into a single auburn-coloured shard. The row of shards will then feature colours "ABA", and those shards can be fused into the Philosopher's Stone.
Sample Input
6
3
BAB
3
BBB
5
AABBA
7
BAAABAA
11
BBBAABAAAAB
11
BABBBABBABB
Sample Output
Case #1: Y
Case #2: N
Case #3: Y
Case #4: N
Case #5: Y
Case #6: N
*/