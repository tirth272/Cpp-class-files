#include <iostream>
using namespace std;

class Side
{
protected:
    int l;

public:
    void value(int x)
    {
        l = x;
    }
};
class Square : public Side
{
public:
    int sq()
    {
        return (l * l);
    }
};
class Cube : public Side
{
public:
    int cube()
    {
        return (l * l * l);
    }
};
int main()
{
    Square s;
    s.value(10);
    cout << "Sqyare is : " << s.sq() << endl;

    Cube c;
    c.value(2);
    cout << "Cube is : " << c.cube() << endl;

    return 0;
}