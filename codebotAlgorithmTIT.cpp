//Pixiedev code
#include"pr.h"
using namespace std;
// #define br "\n"
// geting each character in v (vector or dynamic array) from s (string)
void stoi(vector<int> &v,const string &s){
	stringstream ss;
	ss<<s;
	int num;
	while(!ss.eof()){
		ss>>num;
		v.emplace_back(num);
	}
}
int rowCalc(vector<int> &v){
    int rows=0;
    string c;
    while( getline( cin, c )){ // this loop will stop then there is nothing to input in file
    	stoi(v,c); // geting each character in v (vector or dynamic array) from s (string)
    	rows++;    // count of rows increasing
    }

	return rows;
}
int main() {
	
	std::ios::sync_with_stdio(false); // this line makes cout and cin faster then print and scanf
    ioStd(); // this function is defined by me for input/output from files (input.txt/output.txt)

    vector<int> v;
    int rows = rowCalc(v);
    int colms = v.size()/rows;
    int size = v.size();
    int sum = 0;
    set<int> st;
    for (int i = 0; i < size; ++i)
    {
    	if(  v.at(i) == 0 ){
    		st.insert(i+colms);
    		continue;
    	} 
    	if( st.count(i) ) continue;
    	sum += v.at(i);

    }
    cout<< sum <<br;
    // cout << "Rows: "<< rows <<br;

    // cout << "columns: "<< v.size()/rows; // all element of matrix / rows for calc the columns
	
	return 0;
}

/*
Question:

							///////////////////////
							// CODEBOT ALGORITHM //
							///////////////////////

After they became famous, the CodeBots all decided to move a new building and live together.
The building is represented by a rectangular matrix of rooms. Each cell in the matrix contains
an integer that represents the price of the room. Some rooms are free (their cost is 0), but
that's probably because the are haunted, so all the bots are afraid of them.
That is why any room that is free or is located anywhere below a free room in the same column
is not considered suitable for the bots to live in.

help the bots calculate the total price of all the rooms that are suitable for them.

[Input]

A 2-dimensional array of integers representing s rectangular matrix of the building.

Guaranteed constraints:
1 <= matrix.length <= 5,
1 <= matrix[i].length <= 5,
1 <= matrix[i][j] <= 10.

[output]

The total price of all the rooms that are suitable for the CodeBots to live in.



*/