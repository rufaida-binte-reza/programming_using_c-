#include<iostream>
using namespace std;

class Rectangle
{
  private :
    int length, width;

  public:
    Rectangle()
    {
        length = 0;
        width = 0;
    }

    void get_data()
    {
        cout<<length<<" "<<width<<endl;
    }

    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }


    void area()
    {
        cout<<length*width<<endl;
    }

    void perimeter()
    {
        cout<<2*(length+width)<<endl;
    }
};

int main()
{
    Rectangle r1;
    Rectangle r2(10, 20);

    r2.area();
    r2.perimeter();
}
