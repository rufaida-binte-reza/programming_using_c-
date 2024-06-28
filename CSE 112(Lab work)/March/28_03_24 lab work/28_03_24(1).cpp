//MULTILEVEL INHERITANCE


#include<bits/stdc++.h>
using namespace std;

class Base1
{
private:

    int x;

public:

    Base1()
    {
        x=0;
    }

    Base1(int a)
    {
        x=a;
    }

    void show_x()
    {
        cout<<x<<endl;
    }
};


class Derived1: public Base1
{
private:

    int y;

public:

    Derived1()
    {
        y=0;
    }

    Derived1(int a, int b):Base1(a)
    {
        y=b;
    }

    void show_xy()
    {
        show_x();
        cout<<y<<endl;
    }
};


class Derived2:public Derived1
{
private:

    int z;

public:

    Derived2()
    {
        z=0;
    }

    Derived2(int a, int b, int c):Derived1(a,b)
    {
        z=c;
    }

    void show_xyz()
    {
        show_xy();
        cout<<z<<endl;
    }
};


int main()
{
    Base1 B11;
    Base1 B12(7);
    B12.show_x();

    Derived1 D11;
    Derived1 D12(6,13);
    D12.show_xy();

    Derived2 D21;
    Derived2 D22(10,20,30);
    D22.show_xyz();
}
