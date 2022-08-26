#include<iostream>

/*
Method Overriding : Same Function Name , and Same Parameters. (Same Signature)


*/


using namespace std;

class A{
	public:
		void show()
		{
			cout<<"Show from A";
		}
};

class B : public A{
	public: 
		void show()
		{
			cout<<"Show from B";
		}
	
};

int main()
{
	/*B *b = new B();
	b->show();
	*/
	
//	A a ;
//	a.show();
	
	B b;
	b.show();
	
	return 0;
}