#include<iostream>
using namespace std;

class Shape
{
    public:
    float side1, side2;

    float area()
    {
        return 2*(side1+(side2/2));
    }

    float perimeter()
    {
        return (side1*2)+(2*side2);
    }
};



int main()
{
  float area1, area2, perimeter1, perimeter2;
   Shape s1, s2;

   s1.side1=20;
   s1.side2=40;
   s2.side1=60;
   s2.side2=80;

   area1 = s1.area();
   cout<<area1<<endl;

   area2= s2.area();
   cout<<area2<<endl;


   perimeter1 = s1.perimeter();
   cout<<perimeter1<<endl;

   perimeter2= s2.perimeter();
   cout<<perimeter2<<endl;



   return 0;
}


