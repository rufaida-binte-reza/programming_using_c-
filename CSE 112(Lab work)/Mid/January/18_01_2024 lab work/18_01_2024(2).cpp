#include<iostream>
using namespace std;

class Complex
{
  private:
    int real, img;

  public:
    void set_data(int r, int i)
    {
        real=r;
        img=i;
    }


    void get_data()
    {
        cout<<real<<" "<<img<<endl;
    }

     Complex sum(Complex obj1, Complex obj2)
    {
         Complex temp;
         temp.real= obj1.real+obj2.real;
         temp.img= obj1.img+obj2.img;

         return temp;
    }
};

int main()
{
    Complex c1, c2;
    c1.set_data(2, 12);
    c1.get_data();
    c2.set_data(3, 13);
    c2.get_data();
    Complex c3;
    c3=c1.sum(c1,c2);

    cout<<"sum of the complex numbers= ";
    c3.get_data();

    return 0;
}

