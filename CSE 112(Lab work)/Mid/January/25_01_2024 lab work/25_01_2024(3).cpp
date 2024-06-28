#include<iostream>
using namespace std;
class Y;

class X
{
private:
    int data1, data2;

public:
    void set_data(int d1, int d2)
    {
        data1=d1;
        data2=d2;
    }

    void get_data()
    {
        cout<<data1<<" , "<<data2<<endl;
    }

  friend int sum(X& obj1, Y &obj2);
  friend void exchange(X&obj1, Y&obj2);

};

class Y
{
private:
    int data1, data2;

public:
    void set_data(int d1, int d2)
    {
        data1=d1;
        data2=d2;
    }

    void get_data()
    {
        cout<<data1<<" , "<<data2<<endl;
    }

   friend int sum(X& obj1, Y& obj2);
   friend void exchange(X &obj1, Y &obj2);

};

int sum(X& obj1, Y& obj2)
 {
     int temp;
     temp=obj1.data1+obj2.data1;
     //temp.data2=obj1.data2+obj2.data2;
     return temp;
 }


  void exchange(X &obj1, Y &obj2)
 {
     int temp;
     temp=obj1.data1;
     obj1.data1=obj2.data2;
     obj2.data2=temp;
     cout<<obj1.data1<<obj2.data2<<endl;
 }


int main()
{
    X x1,x2,x3;
    Y y1,y2,y3;
    x1.set_data(10, 20);
    y1.set_data(15, 25);
    x1.get_data();
    y1.get_data();
    int r=sum(x1,y1);
    exchange(x1,y1);

    cout<<r<<endl;



}
