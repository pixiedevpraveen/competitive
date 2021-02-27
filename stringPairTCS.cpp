//Pixiedev code
#include <bits/stdc++.h>
using namespace std;
void ioStd();
void Partition(long int n, vector<int> &vPart)
{
	while (n>=1000) {
		int t=n%1000;
		vPart.push_back(t);
		n/=1000;
	}
	vPart.push_back(n);
}

string Read0_19(int n)
{
	if (n>=0 && n<=19) {
		vector<string> reading={
			"","one","two","three","four","five",
			"six","seven","eight","nine","ten",
			"eleven","twelve","thirteen","fourteen","fifteen",
			"sixteen","seventeen","eighteen","nineteen"};
		return reading[n];
	}
	else
		return "";
}

string ReadTens(int k)
{
	if (k>=2 && k<=9) {
		vector<string> reading={
			"","","twenty","thirty","fouty",
			"fifty","sixty", "seventy","eighty","ninety"};
		return reading[k];
	}
	else
		return "";
}

string ReadThreeDigits(int n)
{
	stringstream ss;
	int digit1=n/100;
	int digit2=(n%100)/10;
	int digit3=n%10;

	if (digit1>0) ss << Read0_19(digit1) << " " << "hundred" << " ";
	if (digit2>0) {
		if (digit2==1) ss << Read0_19(digit2*10+digit3);
		else ss << ReadTens(digit2) << "-" << Read0_19(digit3);
	}
	if (digit2==0 && digit3!=0) ss << " " << Read0_19(digit3);

	return ss.str();
}

string ReadNumber(long int num)
{
	vector<int> vPart;
	vector<string> vUnit={"","thousand","million","billion"};
	stringstream ss;
	Partition(num,vPart);
	for (int i=vPart.size()-1;i>=0;--i)
		ss << ReadThreeDigits(vPart[i]) << " " << vUnit[i] << " ";
	return ss.str();
}
int Subarr(int a[],int N, int k)
{
	int found = 0;
	int sum = 0;

	for (int i = 0; i < N-1; ++i)
	{
		if(a[i]+a[i+1] == k)
			found += 1;
	}

	return found;
}
string removeSpaces(string textStr)
{
    stringstream ssObj;
    string temp;
    ssObj << textStr;
    // Making the string empty
    textStr.clear();
    while (!ssObj.eof()) {
        ssObj >> temp;
        textStr.append(temp);
        // making the temp empty for space in the last of string otherwise it repeat the last word
        temp.clear();
    }
    return textStr;
}
int main()
{
	ioStd();
	int N;
	cin>> N;
	int a[N];
	multiset<char> s[N];
	string ts;
	int count, countvl=0;
	for (int i = 0; i < N; ++i)
	{
		cin>> a[i];
		ts = ReadNumber(a[i]);
		s[i].insert(ts.begin(), ts.end());

	}
	char vl[] = {'a','e','i','o','u'};

	for (int j = 0; j < N; ++j)
	{	
		for (int i = 0; i < 5; ++i)
		{
			count= s[j].count(vl[i]);
			if(count)
				countvl += count;
		}
	}
	if( countvl > 100 )
		cout<< "greater 100";
	else{
		int ansi = Subarr(a,N,countvl);
		string ans;
		if(ansi==0)
			ans = "zero";
		else
			ans = ReadNumber(ansi);
		ans=removeSpaces(ans);
		cout<< ans;
		
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