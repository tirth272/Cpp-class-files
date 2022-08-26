/*
    Pure virtual function:: 1) A function does not have a body.
                            2) This type of functions are only declared.
                             example:
                                        void demo();
*/
#include <iostream>
using namespace std;

class A
{
public:
    void display1()
    {
        cout << "Non pure virtual function in base class!" << endl;
    }
    virtual void display2();
};
class B : public A
{
public:
    void display2()
    {
        cout << "Pure virtual function in Derived class!" << endl;
    }
};
int main()
{
    B b;
    b.display1();
    b.display2();
    return 0;
}