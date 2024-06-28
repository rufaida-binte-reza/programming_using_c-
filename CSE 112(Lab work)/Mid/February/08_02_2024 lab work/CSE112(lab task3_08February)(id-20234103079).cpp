#include<iostream>
using namespace std;

class Time
{
private:
    int year, month, day;

public:

    Time()
    {
        year=0;
        month=0;
        day=0;
    }

    Time(int y, int m, int d)
    {
        year=y;
        month=m;
        day=d;
    }

    Time sub(Time obj1, Time obj2)
    {
       Time diff;

       if(obj1.day>=obj2.day)
        {
            diff.day=obj1.day-obj2.day;
        }
        else
        {
            obj1.day=obj1.day+30;
            diff.day=obj1.day-obj2.day;
            obj2.month++;
        }

        if(obj1.month>=obj2.month)
        {
            diff.month= obj1.month-obj2.month;
        }
        else
        {
            obj1.month=obj1.month+12;
            diff.month=obj1.month-obj2.month;
            obj2.year++;
        }

        if(obj1.year>=obj2.year)
        {
            diff.year=obj1.year-obj2.year;
        }

        return diff;
    }

    void show()
    {
        cout<<year<<"year "<<month<<"month "<<day<<"day "<<endl;
    }

};

int main()
{
    Time T1;

    int y1, m1, d1, y2, m2, d2;
    cin>>y1>>m1>>d1;
    cin>>y2>>m2>>d2;
    Time T2(y1,m1,d1);
    T2.show();
    Time T3(y2,m2,d2);
    T3.show();

    Time T4;
    T4=T1.sub(T2,T3);
    T4.show();

}

