// operatorOverLoadingHrank.cpp
#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
};

Complex operator + (const Complex& rightHandSide);

// **** ‘<<‘ insertion operator stream overloading (prototype) ****

friend ostream& operator << (ostream &os, const Complex &rightHandSide);

// **** ‘>>’ extraction operator stream overloading (prototype) ****

friend istream& operator >> (istream &is, Complex &rightHandSide);

#endif

// };

#ifdef CAKE

/*

+ add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)

*/

Complex Complex::operator + (const Complex& rightHandSide) {

Complex temp;

temp.a = this->a + rightHandSide.a;

temp.b = this->b + rightHandSide.b;

return temp;

}

#endif

/*

+ add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)

*/

Complex operator + (const Complex& lhs, const Complex& rhs)

{

Complex temp;

temp.a = lhs.a + rhs.a;

temp.b = lhs.b + rhs.b;

return temp;

}

/*

Overload ‘<<‘ operator.

*/

ostream & operator << (ostream& os, const Complex& rightHandSide) {

os << rightHandSide.a << “+i” << rightHandSide.b;

return os;

}

/*

Overload ‘>>’ operator.

*/

istream& operator >> (istream& is, Complex& rightHandSide) {

// **** ****

is >> rightHandSide.a;

// **** ****

is.ignore();  // skip ‘+’

is.ignore();  // skip ‘i’

// **** ****

is >> rightHandSide.b;

return is;

}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
	#endif

    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
