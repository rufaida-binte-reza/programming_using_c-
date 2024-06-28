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
       //(*p).set_data(h1, w1); // = it works as arr[0].set_data(h1, w1);
       p->set_data(h1, w1);
       p++;
    }

    p=arr;
    for(int i=0; i<5; i++)
    {
       //(*p).get_data();
        p->get_data();
       p++;
    }
}
