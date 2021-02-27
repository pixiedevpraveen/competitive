#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;


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


int main()
{
	long int N;
	cin >> N;

	cout << ReadNumber(N);
}