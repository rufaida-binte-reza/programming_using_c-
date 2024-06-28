#include<iostream>
using namespace std;
class Y;

class X
{
private:
    int data1;

public:
    void set_data(int d1)
    {
        data1=d1;
    }

    void get_data()
    {
        cout<<data1<<endl;
    }

  friend int sum(X& obj1, Y& obj2);
  friend void exchange(X& obj1, Y& obj2);

};

class Y
{
private:
    int data2;

public:
    void set_data(int d2)
    {
        data2=d2;
    }

    void get_data()
    {
        cout<<data2<<endl;
    }

   friend int sum(X& obj1, Y& obj2);
   friend void exchange(X& obj1, Y& obj2);

};

int sum(X& obj1, Y& obj2)
 {
     int temp;
     temp=obj1.data1+obj2.data2;
     return temp;
 }


  void exchange(X &obj1, Y &obj2)
 {
     int temp;
     temp=obj1.data1;
     obj1.data1=obj2.data2;
     obj2.data2=temp;
     cout<<"The updated values of data1 and data2: " <<obj1.data1<<" "<<obj2.data2<<endl;
 }


int main()
{
    X x1;
    Y y1;
    x1.set_data(10);
    y1.set_data(20);

    int r=sum(x1,y1);

    cout<<"The sum of data1 from object X and data2 from object Y: "<<r<<endl;

    exchange(x1,y1);

}
