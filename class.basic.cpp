#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;
class people
{
public:
    char name[30];
    int age;
    double salary;
    void print()
    {
        cout<<setw(30)<<left<<name<<setw(10)<<age<<setw(15)<< salary<<endl;
    }
    people(char a[],int b,double c)
    {
        strncpy(name,a,sizeof(name)-1);
        name[sizeof(name)-1]='\0';
        age=b;
        salary=c;
    }
    people()
    {

    }
};
int main()
{
    cout<<setw(30)<<left<<"Name"<<setw(10)<<"Age"<<setw(15)<<"Salary"<<endl;
    people one;
    strncpy(one.name,"MUAMMAR SHAHRIAR KHAN DHRUBO",sizeof(one.name)-1);
    one.name[sizeof(one.name)-1]='\0';
    one.age=27;
    one.salary=25000;
    one.print();

    people two("ARIFA ANJUM AVA",25,10000);
    two.print();

    return 0;
}
