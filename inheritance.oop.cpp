#include<iostream>
#include<cstring>
#include<string>
#include<iomanip>
using namespace std;
class people
{
public:
    string name;
    int age;
    float salary;
    void print()
    {
        cout<< "Name : " <<name<<endl;
        cout<< "Age : "<< age << endl;
        cout << "Salary : " << salary << endl;
    }
};
class student : public people
{
public:
    int id;

    void print1()
    {
        cout << "ID : " << id << endl;
        print();
    }
};
int main()
{
    student s1;
    s1.name="MUAMMAR SHAHRIAR KHAN DHRUBO";
    s1.id=1600073;
    s1.age=27;
    s1.salary=25000;
    s1.print1();
    return 0;
}
