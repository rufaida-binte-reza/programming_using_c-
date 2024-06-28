#include<iostream>
using namespace std;


class Distance
{
private:
    double kilometers, meters, centimeters;

public:
    Distance()
    {
        kilometers=0;
        meters=0;
        centimeters=0;
    }

    Distance(double k, double m, double c)
    {
        kilometers=k;
        meters=m;
        centimeters=c;
    }


    void sub(Distance obj1, Distance obj2)
    {
        kilometers=obj1.kilometers-obj2.kilometers;
        meters=obj1.meters-obj2.meters;
        centimeters=obj1.centimeters-obj2.centimeters;
    }

     void show()
    {
        cout<<kilometers<<","<<meters<<","<<centimeters<<endl;
    }


};


int main()
{
    double k, m, c;
    cin>>k>>m>>c;
    Distance D1(k, m, c);
    double a, b, d;
    cin>>a>>b>>d;
    Distance D2(a, b, d);

    D1.show();
    D2.show();

    Distance D3;
    D3.sub(D1,D2);
    D3.show();

}

