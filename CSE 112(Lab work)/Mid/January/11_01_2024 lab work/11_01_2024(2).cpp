#include<iostream>
using namespace std;

class Triangle
{
  private :
    double height, base;

 public:
    Triangle()
    {
        height = 0;
        base = 0;
    }

    void get_data()
    {
        cout<<height<<" "<<base<<endl;
    }

    Triangle(int h, int b)
    {
        height = h;
        base = b;
    }


    void area()
    {
        cout<<height*base<<endl;
    }

    void perimeter()
    {
        cout<<2*(height+base)<<endl;
    }
};

int main()
{
    Triangle r1(10,20);
    Triangle r2(r1);

    r2.area();
    r2.perimeter();
}

