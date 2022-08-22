#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void Get()
    {
        cout << "Enter A : ";
        cin >> a;
    }
};
class B : public A
{
public:
    void Show()
    {
        cout << "A : " << a << endl;
    }
};
int main()
{
    B b;
    b.Get();
    b.Show();
    return 0;
}