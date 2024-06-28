#include<iostream>
using namespace std;

class Square
{
  private:
    double side;

  public:
    Square()
    {
        side=0;
    }

    Square(double s)
    {
        side=s;
    }

    Square(Square &s2)
    {
        side = s2.side;
    }

    void display()
    {
        cout<<side<<endl;
    }
};

int main()
{
    Square s1;
    Square s2(30);
    Square s3(s2);
    s2.display();
    s3.display();

    return 0;
}
