#include<iostream>
using namespace std;

template<class X, class Y>
class Container
{
private:
    X a;
    Y b;

public:
    A()
    {
       X a=0;
       Y b=0;
    }

    A(X a, Y b)
    {
       this->a=a;
       this->b=b;
    }

    void addElement(X a, Y b)
    {
        X c;
        Y d;
        cin>>c>>d;
        cout<<a<<" "<<b<<" "<<c<<" "<<" "<<d<<endl;
    }

    void displayElements(X a, Y b)
    {
        cout<<a<<" "<<b<<endl;
    }

    void getSize(X a, Y b)
    {
        cout<<a+b<<endl;
    }

};

int main()
{
    Container <int , double> c1(7, 13.6);
    c1.addElement();

    Container <int , string> c2(7, Green);
    c2.displayElements();

    Container <int , double> c3(7, 6.13);
    c3.getSize();

}
