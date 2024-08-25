#include<iostream>
using namespace std;
class send_message
{
public:
    virtual void messages()=0;
    virtual void greetings()
    {
        cout<< "Hello!!!"<<endl;
    }
};
class rahim : public send_message
{
    virtual void messages() override
    {
        cout<< "I am RAHIM." << endl;
    }
};
class karim : public send_message
{
public:
    virtual void messages() override
    {
        cout<< "I am KARIM." << endl;
    }
};
int main()
{
    send_message *m;
    rahim r;
    karim k;
    m=&r;
    m->messages();

    m=&k;
    m->messages();

    m->greetings();
    r.greetings();
    return 0;
}
