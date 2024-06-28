#include<iostream>
using namespace std;

class Temperature
{
private:
  double  Celsius, Fahrenheit;

public:
    Temperature()
    {
       Celsius=0;
       Fahrenheit=0;
    }

    Temperature(double c, double f)
    {
       Celsius=c;
       Fahrenheit=f;
    }

    void set_Celsius(double c)
    {
       Celsius=c;
    }

    void get_Celsius()
    {
       cout<<"Temperature: "<<Celsius<<"°C"<<endl;
    }

    void set_Fahrenheit(double f)
    {
       Fahrenheit=f;
    }

    void get_Fahrenheit()
    {
       cout<<"Temperature: "<<Fahrenheit<<"°F"<<endl;
    }

    double C_to_F(Temperature obj1)
    {
        double temp;
        temp=(obj1.Celsius*9/5)+32;

        return temp;
    }

    double F_to_C(Temperature obj1)
    {
        double temp;
        temp=(obj1.Fahrenheit-32)* 5/9;

        return temp;
    }

};

int main()
{
    double t1, t2;
    Temperature T1, T2, T3, T4;
    T1.set_Celsius(37);
    T1.get_Celsius();
    t1=T2.C_to_F(T1);
    cout<<"Temperature in Fahrenheit: "<<t1<<"°F"<<endl;

    T3.set_Fahrenheit(3);
    T3.get_Fahrenheit();
    t2=T4.F_to_C(T3);
    cout<<"Temperature in Celsius: "<<t2<<"°C"<<endl;


}
