/*
    Data Abstraction : Hiding the implementation
*/

#include <iostream>
using namespace std;

class base
{
public:
    virtual void show()
    {
        cout << "Base class called";
    }
};
class child : public base
{
public:
    void show()
    {
        cout << "child class called";
    }
};
int main()
{
    base *b = new child();
    b->show();

    return 0;
}