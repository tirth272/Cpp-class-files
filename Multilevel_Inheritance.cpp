#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void getA()
    {
        cout << "Enter the value of A : ";
        cin >> a;
    }
    void showA()
    {
        cout << "The value of A is : " << a << endl;
    }
};
class B : public A
{
public:
    int b;
    void getB()
    {
        cout << "Enter the value of B : ";
        cin >> b;
    }
    void showB()
    {
        cout << "The value of B is : " << b << endl;
    }
};
class C : public B
{
public:
    int c;
    void add()
    {
        cout << "Addition of A and B is: " << a + b << endl;
    }
};

int main()
{
    C c;
    c.getA();
    c.showA();

    c.getB();
    c.showB();

    c.add();

    return 0;
}