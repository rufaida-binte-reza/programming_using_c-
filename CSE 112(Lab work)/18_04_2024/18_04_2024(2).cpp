#include<iostream>
using namespace std;


class Rectangle
{
private:
   int length, width;

public:
    Rectangle()
    {
        length=0;
        width=0;

        cout<<"Default base constructor is called"<<endl;
    }

    Rectangle(int length, int width)
    {
        this->length=length;
        this->width=width;

        cout<<"Parameterized base constructor is called"<<endl;
    }

    void show_l_w()
    {
        cout<<length<<" "<<width<<" ";
    }

    ~Rectangle()
    {
        cout<<"Base object destroyed"<<endl;
    }
};


class Box: public Rectangle
{
private:
   int height;

public:
    Box()
    {
        height=0;

        cout<<"Default derived constructor is called"<<endl;
    }

    Box(int length, int width, int height): Rectangle(length, width)
    {
        this->height=height;

        cout<<"Derived Parameterized constructor is called"<<endl;
    }

    void show_h()
    {
        cout<<height<<endl;
    }

    void show_l_w_h()
    {
        show_l_w();
        cout<<height<<endl;
    }

    ~Box()
    {
        cout<<"Derived object destroyed"<<endl;
    }
};


int main()
{
    Box b1;
    Box b(10, 20, 30);

    b.show_h();
    b.show_l_w_h();
}


