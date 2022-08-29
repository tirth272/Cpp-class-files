/*
    Static: Only static members can be accessed outside the class using scope resolution operator ::
    
*/

#include <iostream>
using namespace std;

class StaticDemo
{
public:
    static int ObjectCount;

    StaticDemo()
    {
        // cout << "Default Constructor Called." << endl;
        ObjectCount++;
    }
};
int StaticDemo::ObjectCount = 0;
int main()
{
    StaticDemo s1, s2, s3, s4;
    cout << "Object count is: " << s1.ObjectCount << endl;
    return 0;
}