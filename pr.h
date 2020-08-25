#ifndef PR_H_INCLUDED
#define PR_H_INCLUDED
#include<bits/stdc++.h>
//header
using namespace std;
// declatatation
void ioStd();
unsigned digN (unsigned i);
int sqr(int a,int b);
bool cmp(int x,int y){ return x>y; }

#define br "\n"
// #define size(ar) sizeof(ar)/sizeof(ar[0])
// string to_string()


void ioStd()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    #endif
}

// this function gives count of digit
unsigned digN (unsigned i)
{
    // return i > 0 ? (int) log10 ((double) i) + 1 : 1;
    return ((i<=1)? 1 : log10(i)+1);
}
// #include<iomanip>
// template <class p>
// void swap(p &a, p &b)
// {
//     p temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
int sqr(int a,int b=2)
{
    int s=0;
    while(b--)s+=(a*a);
    return s;
}

#define fs(i,a,n) for(int i=(a);i<(n);i++)
#define f(i,n) fs(i,0,n)
#define rf(i,b) for (int i = (b)-1; i >= 0; --i)
#define trav(x,a) for (auto& x: a)
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)


// #define deb(x) cout << #x << "=" << x << endl
// #define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define eb emplace_back
#define pob pop_back
#define mp make_pair
#define F first
#define S second


template<class T> bool ckmin(T& a, const T& b) {
    return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) {
    return a < b ? a = b, 1 : 0; }

// TO_STRING
#define ts to_string
string ts(char c) { return string(1,c); }
string ts(const char* s) { return (string)s; }
string ts(string s) { return s; }
template<class T>
string ts(T t){
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

#endif // PR_H_INCLUDED
