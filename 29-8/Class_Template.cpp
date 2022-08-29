#include <iostream>
using namespace std;

template <class T>
class A
{
public:
    T num;
    A(T n)
    {
        num = n;
    }
    T getnum()
    {
        return num;
    }
};

int main()
{
    A<int> a(29);
    A<float> a1(56.54);
    cout << a.getnum() << endl;
    cout << a1.getnum() << endl;
    return 0;
}