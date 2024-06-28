#include<iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex()
    {
        real=0;
        img=0;
    }

    Complex(int real, int img)
    {
        this->real=real;
        this->img=img;
    }

    void show()
    {
        if(img<0)
        cout<<real<<img<<"i"<<endl;

        else
        cout<<real<<"+"<<img<<"i"<<endl;
    }

    Complex operator +(Complex obj)
    {
        Complex temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }

    Complex operator -(Complex obj)
    {
        Complex temp;
        temp.real=real-obj.real;
        temp.img=img-obj.img;
        return temp;
    }

    Complex operator *(Complex obj)
    {
        Complex temp;
        temp.real=real*obj.real-img*obj.img;
        temp.img=real*obj.img+img*obj.real;
        return temp;
    }

};

int main()
{
    Complex c1(4, 2), c2(2, 3), c3, c4, c5;

    c3=c1+c2;
    c3.show();

    c4=c1-c2;
    c4.show();

    c5=c1*c2;
    c5.show();
}
