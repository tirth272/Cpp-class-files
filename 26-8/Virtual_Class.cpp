#include <iostream>
using namespace std;

class A
{
public:
    void msg()
    {
        cout << "Getting msg from A!!";
    }
};
class C : virtual public A
{
};
class B : virtual public A
{
};
class D : public B, public C
{
};

int main()
{
    D d;
    d.msg();
    return 0;
}
/*
    DDOD: Deadly diamond of death : Ambiguous Error

                                    Virtual_Class.cpp: In function 'int main()':
                                Virtual_Class.cpp:25:7: error: request for member 'msg' is ambiguous
                                     d.msg();
                                       ^~~
                                Virtual_Class.cpp:7:10: note: candidates are: void A::msg()
                                     void msg()
                                          ^~~
                                Virtual_Class.cpp:7:10: note:                 void A::msg()
*/