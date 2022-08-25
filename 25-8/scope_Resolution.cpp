#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "Function Called inside the class." << endl;
    }
    void func2();
};
void A::func2()
{
    cout << "Function called outside the class." << endl;
}
int main()
{
    A a;
    a.func1();
    a.func2();
    return 0;
}