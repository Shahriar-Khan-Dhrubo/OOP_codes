#include<iostream>
using namespace std;
int x=20;
int main()
{
    int x=10;
    ::x+=5;
    x+=5;
    cout<<::x++<<endl;
    cout<<::x;
    return 0;
}
