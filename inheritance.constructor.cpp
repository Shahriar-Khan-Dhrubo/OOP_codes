#include<iostream>
#include<string>
using namespace std;
class people
{
public:
    string name;
    int age;
    void print()
    {
        cout<< "Name : " <<name << endl;
        cout<< "Age : " << age << endl;
    }
};
class student : public people
{
public:
    int id;
    student(int id,string name,int age)// member initialization
    :id(id),people{name,age}
    {
        //this->id=id;
        //this->name=name; lengthy process
        //this->age=age;
    }
    ~student(){}
    void print1()
    {
        cout << "ID : " <<id<<endl;
        print();
    }
};
int main()
{
    student s1(1600073,"MUAMMAR SHAHRIAR KHAN DHRUBO",27);
    s1.print1();
    return 0;
}
