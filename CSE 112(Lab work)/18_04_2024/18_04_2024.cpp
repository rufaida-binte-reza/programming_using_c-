#include<iostream>
using namespace std;


class FullName
{
private:
    string name;

public:
    FullName()
    {
      name="0";
    }

    FullName(string name)
    {
      this->name= name;
    }

    void show()
    {
        cout<<name<<endl;
    }

    FullName operator +(FullName objN)
    {
        FullName temp;
        temp.name= name +" "+ objN.name;
        return temp;
    }
};


int main()
{
    FullName N1("Kim");
    FullName N2("Tae");
    FullName N3("Hyung");
    FullName N4;

    N4 = N1+N2+N3;

    N4.show();
}
