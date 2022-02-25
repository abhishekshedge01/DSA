#include <bits/stdc++.h>
using namespace std;

//abstraction: we do this with the help of abstract classes also known as interfaces in java
//we do this with the help of pure virtual functions concept

class abstractClass
{
	virtual void getPromotion()=0;    //pure virtual function which means it has to be implemented in the derived class
};
//Remember we cannot instantiate or create an object of abstract class, for creating an object we have to take help of the derived class

//encapsulation binding all members into single entity class
class Employee:abstractClass
{
	string name;
	string company;
	int age;

	public:
	//deafult constructor initialisation
	Employee()
	{
		name = "abhishek";
		company = "Amazon";
		age = 40;
	}

	//parameterised constructor
	Employee(string a, string b, int c)
	{
		name = a;
		company = b;
		age = c;
	}

	//copy constructor
	Employee(Employee& ob)
	{
		name = ob.name;
		company = ob.company;
		age = ob.age;
	}


	//implementation of abstract function in the derived class
	void getPromotion()
	{
		if (age < 25)
		{
			cout << name << ", you are not elligible for the promotion" << endl;
		}
		else
		{
			cout << name << ", you are being promoted to SSE postion!" << endl;
		}
	}

	//setting up gettters and setters
	void setAge(int a)
	{
		if (a > 19)
		{
			age = a;
		}
	}

	void setName(string a)
	{
		name = a;
	}

	void setAge(string a)
	{
		company = a;
	}

	int getAge()
	{
		return age;
	}

	string getName()
	{
		return name;
	}

	string getCompany()
	{
		return company;
	}

	void findAns()
	{
		cout << name << " " << company << " " << age << "\n";
	}
};

int main()
{
	Employee obj1("abhishek","ms",100);
	obj1.setAge(20);
	obj1.setName("Raghu");
	cout << obj1.getName() << endl;
	Employee obj2 = obj1; 
	Employee obj3("Rishikesh", "az", 45);
	obj1.findAns();
	obj2.findAns();
	obj3.findAns();
	obj1.getPromotion();
	obj3.getPromotion();
}
