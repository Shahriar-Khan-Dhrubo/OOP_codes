#include<iostream>
#include<string>
using namespace std;
class A
{
private:
    string name="Dhrubo";
    int age=27;
public:
    friend class B;

};
class B
{
public:
    void display(A ob)
    {
        cout<<ob.name<<endl;
        cout<<ob.age<<endl;
    }
};
int main()
{
    A ob1;
    B ob2;
    ob2.display(ob1);
    return 0;
}
