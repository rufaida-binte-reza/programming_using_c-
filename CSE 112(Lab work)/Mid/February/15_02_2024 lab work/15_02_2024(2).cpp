#include<iostream>
#include<math.h>

using namespace std;

class Point
{

private:

int X, Y;

public:

    Point()
    {
        X=0;
        Y=0;
    }

    Point(int x, int y)
    {
        X=x;
        Y=y;
    }

    friend double calculateDistance(Point obj1, Point obj2);
};

     double calculateDistance(Point obj1, Point obj2)
     {
         Point temp;

         temp.X=obj2.X-obj1.X;
         temp.Y=obj2.Y-obj1.Y;

         return sqrt(pow(temp.X,2)+pow(temp.Y,2));
     }

int main()
{
    Point P1(13, 7);
    Point P2(6, 13);

    cout<<"Distance: "<<calculateDistance(P1,P2)<<endl;

}
