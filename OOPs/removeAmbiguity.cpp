#include <bits/stdc++.h>
using namespace std;

class Users1 {
	int data;
public:
	void output()
	{
		cout << "Hello User1" << endl;
	}
};

class Users2 {
	int data;
public:
	void output()
	{
		cout << "Hello User2" << endl;
	}
};


//ambiguity1: Scope resolution operator user to remove the ambiguity
class SuperUser :public Users1, public Users2 {
public:
	void output()
	{
		Users1::output();
	}
};


//ambiguity2 resolved automatically here, the function gets overridden even after inheritance since each function has different class names associated
class B 
{
	int a;
    public:
	void answer()
	{
		cout << "B class ho rahi print" << endl;
	}
};

class C :public B
{
	int b;
public:
	void answer()
	{
		cout << "C class ho rahi print" << endl;
	}
};


int main()
{
	/*Users1 u1;
	Users2 u2;
	u1.output();
	u2.output();
	SuperUser s1;
	s1.output();*/

	B b;
	C c;
	b.answer();
	c.answer();
}