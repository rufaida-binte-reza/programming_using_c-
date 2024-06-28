#include<iostream>
using namespace std;

class KKFC
{
private:
    string food1, food2, food3, food4, food5;
    int counter;

public:
    void set_ord(int c)
    {
        counter=c;
    }

    void choosefood(string f1, string f2, string f3)
    {
        food1=f1;
        food2=f2;
        food3=f3;

    }

    void choosefood(string f1, string f2, string f3, string f4)
    {
        food1=f1;
        food2=f2;
        food3=f3;
        food4=f4;
    }

    void choosefood(string f1, string f2, string f3, string f4, string f5)
    {
        food1=f1;
        food2=f2;
        food3=f3;
        food4=f4;
        food5=f5;
    }

     void display1()
    {
        cout<<food1<<" "<<food2<<" "<<food3<<endl;
    }

     void display2()
    {
        cout<<food1<<" "<<food2<<" "<<food3<<" "<<food4<<endl;
    }

    void display3()
    {
        cout<<food1<<" "<<food2<<" "<<food3<<" "<<food4<<" "<<food5<<endl;
    }
};

int main()
{
    KKFC C;
    int c;
    cin>>c;
    C.set_ord(c);

    KKFC F1, F2, F3;
    if(c==3)
    {
       string f1, f2, f3;
       cin>>f1>>f2>>f3;
       F1.choosefood(f1, f2, f3);
       F1.display1();
    }

    if(c==4)
    {
       string f1, f2, f3, f4;
       cin>>f1>>f2>>f3>>f4;
       F2.choosefood(f1, f2, f3, f4);
       F2.display2();
    }

    if(c==5)
    {
       string f1, f2, f3, f4, f5;
       cin>>f1>>f2>>f3>>f4>>f5;
       F3.choosefood(f1, f2, f3, f4, f5);
       F3.display3();
    }

}
