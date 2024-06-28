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
        cout<<area<<" "<<color<<endl;
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
        cout<<area<<" "<<color<<endl;
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
    Box1 b101(10, "Blue");
    b101.display();
    Box2 b201(20, "Purple");
    b201.display();

    Compare_Box(b101,b201);

}

