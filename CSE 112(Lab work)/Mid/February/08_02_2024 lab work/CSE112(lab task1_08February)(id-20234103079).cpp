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
    int h, w;

    Rectangle rec[40];
    for(int i=0; i<40; i++)
    {
        cin>>h>>w;
        rec[i].set_data(h,w);
    }

    for(int i=0; i<40; i++)
    {
        rec[i].get_data();
    }
}
