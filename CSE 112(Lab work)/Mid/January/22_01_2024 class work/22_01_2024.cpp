#include<iostream>
using namespace std;

class Complex
{
  private:
    int real, img;

  public:

    Complex ()
    {
        real=0;
        img=0;
    }

    Complex (int r, int i)
    {
        real=r;
        img=i;
    }


    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }

    friend Complex add(Complex& obj1, Complex& obj2);
    friend Complex multiply(Complex& obj1, Complex& obj2);

};


     Complex add(Complex& obj1, Complex& obj2)
    {
       Complex temp;
       temp.real=obj1.real+obj2.real;
       temp.img=obj1.img+obj2.img;

       return temp;
    }

     Complex multiply(Complex& obj1, Complex& obj2)
    {
       Complex temp;
       temp.real=obj1.real*obj2.real-obj1.img*obj2.img;
       temp.img=obj1.real*obj2.img+obj1.img*obj2.real;

       return temp;
    }

int main()
{
    Complex c1(1,2);
    Complex c2(3,4);
    Complex c3, c4;
    c3=add(c1,c2);
    c4=multiply(c1,c2);

    c3.display();
    c4.display();


    return 0;
}

