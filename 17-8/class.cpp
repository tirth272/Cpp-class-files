#include <iostream>
using namespace std;

class demo
{
public:
    string name;

    void getName()
    {
        cout << "Enter your Name: ";
        cin >> name;
    }
    void showName()
    {
        cout << "your name is " << name;
    }
};

int main()
{
    demo n;
    n.getName();
    n.showName();
    return 0;
}