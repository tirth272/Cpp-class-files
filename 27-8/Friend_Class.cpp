#include <iostream>
using namespace std;

class A
{
private:
    int num1;
    friend class B;

public:
    A()
    {
        num1 = 7;
    }
};
class B
{
private:
    int num2;

public:
    B()
    {
        num2 = 2;
    }
    int add()
    {
        A a;
        a.num1 = 6; // Friend class can access the members and functions of Private specifier And also can change the values of members of that Private specifiers
        return a.num1 + num2;
    }
};

int main()
{
    B b;
    cout << "Addition: " << b.add();
    return 0;
}