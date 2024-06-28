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

    for(int i=0; i<5; i++)
    {
        cin>>h1>>w1;
       arr[i].set_data(h1, w1);
    }

    for(int i=0; i<5; i++)
    {
       arr[i].get_data();
    }
}
