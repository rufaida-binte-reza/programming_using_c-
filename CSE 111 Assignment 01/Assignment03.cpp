#include<iostream>
using namespace std;


class Rectangle
{
private:
   int height, width;

public:
    Rectangle()
    {
        height=0;
        width=0;
    }

    Rectangle(int height, int width)
    {
        this->height=height;
        this->width=width;
    }

    void show_h_w()
    {
        cout<<height<<" , "<<width<<endl;
    }

    Rectangle operator +(Rectangle obj)
    {
        Rectangle temp;
        temp.height=height+obj.height;
        temp.width=width+obj.width;
        return temp;
    }

    Rectangle operator *(Rectangle obj)
    {
        Rectangle temp;
        temp.height=height*obj.height;
        temp.width=width*obj.width;
        return temp;
    }

    friend Rectangle operator +(int r, Rectangle obj);
};

    Rectangle operator +(int r, Rectangle obj)
    {
        Rectangle temp;
        temp.height=r+obj.height;
        temp.width=r+obj.width;
        return temp;
    }

int main()
{
    Rectangle r1, r2(10, 20), r3(30, 40), r4(50, 60);

    r1=(r2*r3)+r4;
    r1.show_h_w();

    r1=(25+r2)*r3;
    r1.show_h_w();

}


