#include<iostream>
#include<fstream>
#include <stdlib.h>

using namespace std;
int main()
{
	string fname1;
	string fname2;
	cout<< "Enter First file name with extension: ";
	getline( cin, fname1);
	if( fname1 == "\n" or fname1 == "" ){
		fname1 = "output.txt";
		fname2 = "output2.txt";
	}

	fstream f1(fname1);
	if (!f1)
	{
		system("Color 4");
		cout<< fname1<< " file not found"<< endl;
		return 1;
	}
	
	cout<< "\nEnter Second file name with extension: ";
	cin>> ws;
	getline( cin, fname2);
	fstream f2(fname2);
	if (!f2)
	{
		system("Color 4");
		cout<< fname2<< " file not found"<< endl;
		return 1;
	}

	string t1, t2;
	bool same = true;
	while(f1){

		getline( f1, t1);
		getline( f2, t2);

		if(t1 != t2) same = false;
		if(!same) break;
	}
	if( same ) cout<< "\nsame";
	else
		cout<< "\nNot same!";
	
	return 0;
}