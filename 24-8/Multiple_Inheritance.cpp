#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;

    Student()
    {
        id = 100;
    }
    void getName()
    {
        cout << "Enter your name: ";
        cin >> name;
    }
};
class ExtraMarks
{
public:
    int sp;
    ExtraMarks()
    {
        sp = 65;
    }
};
class Result : public Student, public ExtraMarks
{
public:
    int s1, s2, s3, total;
    float avg;
    Result()
    {
        s1 = 67;
        s2 = 61;
        s3 = 60;
        total = s1 + s2 + s3;
        avg = (float)total / 3;
    }
    void display()
    {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Sports marks: " << sp << endl;
        cout << "Total marks: " << total << endl;
        cout << "Average marks: " << avg << endl;
    }
};
int main()
{
    Result r;
    r.getName();
    r.display();
    return 0;
}