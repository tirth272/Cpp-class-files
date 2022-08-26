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