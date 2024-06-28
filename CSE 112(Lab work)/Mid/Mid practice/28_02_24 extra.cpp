/*1.Define a class named Box1 which has two private data members, one is area as double type another is string as string type.
Also define another class named Box2 which has same private data members as Box1. A parameterized constructor is used to
set the data members of the two classes. Now define a nonmember function named Compare Box () which takes two objects as
parameters (one object of Box1 and another object of Box2] and display "Box1" if the area of object of Box1 is bigger and
"Box2" otherwise. Now implement the code using C++ mechanism*/


#include<iostream>
using namespace std;

class Box2;

class Box1
{
private:
    double area;
    string color;

public:
    Box1()
    {
        area=0;
        color="0";
    }

    Box1(double a, string c)
    {
        area=a;
        color=c;
    }

    void display()
    {
        cout<<"area: "<<area<<" , "<<"color: "<<color<<endl;
    }

    friend void Compare_Box(Box1& obj1, Box2& obj2);
};


class Box2
{
private:
    double area;
    string color;

public:
    Box2()
    {
        area=0;
        color="0";
    }

    Box2(double a, string c)
    {
        area=a;
        color=c;
    }

    void display()
    {
        cout<<"area: "<<area<<" , "<<"color: "<<color<<endl;
    }

    friend void Compare_Box(Box1& obj1, Box2& obj2);
};


    void Compare_Box(Box1& obj1, Box2& obj2)
    {
        if(obj1.area>obj2.area)
        {
            cout<<"Box1"<<endl;
        }
        else
        {
            cout<<"Box2"<<endl;
        }
    }

int main()
{
    Box1 B1(10,"Purple");
    Box2 B2(20,"Green");

    B1.display();
    B2.display();

    Compare_Box(B1,B2);
}
