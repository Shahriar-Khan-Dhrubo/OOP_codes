#include<iostream>
using namespace std;
class shape
{
public:
    double dim1,dim2;
    shape(double dim1,double dim2)
    :dim1(dim1),dim2(dim2)
    {

    }
    virtual double area()
    {
        return 0;
    }
};
class triangle : public shape
{
public:
    double base,height;
    triangle(double base,double height)
    :shape(base,height),base(base),height(height)
    {

    }
    double area() override
    {
        return .5 * base * height;
    }
};
class rectangle : public shape
{
public:
    double length,width;
    rectangle(double length,double width)
    :shape(length,width),length(length),width(width)
    {

    }
    double area() override
    {
        return length * width;
    }
};
int main()
{
    shape *s;
    triangle t(5,10);
    rectangle r(10,20);

    s=&t;
    cout << "Area of Triangle = " << s->area() << endl;

    s=&r;
    cout << "Area of Rectangle = " << s->area() << endl;
    return 0;
}
