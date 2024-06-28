#include<iostream>
using namespace std;

class X
{
private:
    int lenght, width;

public:
    X()
    {
        lenght=0;
        width=0;
    }

    X(int lenght, int width)
    {
        this->lenght=lenght;
        this->width=width;
    }

    void show()
    {
        cout<<lenght<<" "<<width<<endl;

    }

    X operator +(int r)
    {
        X temp;
        temp.lenght=lenght+r;
        temp.width=width+r;
        return temp;
    }

    X operator *(X obj)
    {
        X temp;
        temp.lenght=lenght*obj.lenght;
        temp.width=width*obj.width;
        return temp;
    }

};

int main()
{
    X x1, x2(4, 2), x3(2, 3);

    x1=(x2+2)*x3;
    x1.show();

}
