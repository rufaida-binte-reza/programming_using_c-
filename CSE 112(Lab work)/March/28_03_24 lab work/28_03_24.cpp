//MULTIPLE INHERITANCE



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


class Base2
{
private:

    int y;

public:

    Base2()
    {
        y=0;
    }

    Base2(int b)
    {
        y=b;
    }

    void show_y()
    {
        cout<<y<<endl;
    }
};

class Derived: public Base1, public Base2
{
private:

    int z;

public:

    Derived()
    {
        z=0;
    }

    Derived(int a, int b, int c):Base1(a),Base2(b)
    {
        z=c;
    }

    void show_xyz()
    {
        show_x();
        show_y();
        cout<<z<<endl;
    }
};


int main()
{
    Base1 B11;
    Base1 B12(7);
    B12.show_x();

    Base2 B21;
    Base2 B22(13);
    B22.show_y();

    Derived D1;
    Derived D2(10,20,30);
    D2.show_xyz();
}
