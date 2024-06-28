#include<iostream>
using namespace std;


class Shape
{
 public:
    double side1, side2;

    Shape()
    {
        side1=0;
        side2=0;
    }

    Shape(double side1, double side2)
    {
        this->side1=side1;
        this->side2=side2;
    }

    virtual void display_area()
    {

    }
};


class Triangle:public Shape
{
public:
    Triangle()
    {

    }

    Triangle(double side1, double side2):Shape(side1, side2)
    {

    }

    void display_area()
    {
       cout<<0.5*side1*side2<<endl;
    }
};


class Rectangle:public Shape
{
public:
    Rectangle()
    {

    }

    Rectangle(double side1, double side2):Shape(side1, side2)
    {

    }

    void display_area()
    {
       cout<<side1*side2<<endl;
    }
};



int main()
{
   Shape s;

   Shape*bptr;

   Triangle t(10, 20);
   bptr=&t;
   bptr->display_area();

   Rectangle r(10, 20);
   bptr=&r;
   bptr->display_area();
}
