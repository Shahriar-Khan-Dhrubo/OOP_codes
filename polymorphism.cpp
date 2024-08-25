#include<iostream>
using namespace std;

class people
{
public:
    virtual void display()
    {
        cout << "People" << endl;
    }
};
class student : public people
{
public:
    void display() override
    {
        cout << "Student" << endl;
    }
};
class teacher : public people
{
public:
    void display() override
    {
        cout << "Teacher" << endl;
    }
};
int main()
{
    people *p;
    student s;
    teacher t;
    p=&s;
    p->display();
    p=&t;
    p->display();
    return 0;
}
