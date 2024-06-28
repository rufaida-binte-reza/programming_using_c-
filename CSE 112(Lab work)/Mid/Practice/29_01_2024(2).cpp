#include<iostream>
using namespace std;

class Rectangle
{
private:
    int height, width;

public:
    void set_data(int h, int w)
    {
        height=h;
        width=w;
    }

    void get_data()
    {
        cout<<height<<" "<<width<<endl;
    }

};

int main()
{
    int h1, w1;

    Rectangle arr[5];

    Rectangle *p;
    //p=&arr[0];
    p=arr;

    for(int i=0; i<5; i++)
    {
       cin>>h1>>w1;
       //(*p).set_data(h1, w1);
       arr[0].set_data(h1, w1); //It'll set data on only one address.
       //p++;
    }

    p=arr;
    for(int i=0; i<5; i++)
    {
       arr[0].get_data(); //it'll print only one value from the same address.
       //p++;
    }
}
