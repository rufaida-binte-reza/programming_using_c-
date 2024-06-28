#include<iostream>
using namespace std;


class Vehicle
{
private:
   string brand, model;

public:
    Vehicle()
    {
        brand="0";
        model="0";
    }

    Vehicle(string brand, string model)
    {
        this->brand=brand;
        this->model=model;
    }

    void show1()
    {
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
    }

};


class ElectricDevice
{
private:
   int voltage, powerConsumption;

public:
    ElectricDevice()
    {
        voltage=0;
        powerConsumption=0;
    }

    ElectricDevice(int voltage, int powerConsumption)
    {
        this->voltage=voltage;
        this->powerConsumption=powerConsumption;
    }

    void show2()
    {
        cout<<"Voltage: "<<voltage<<endl;
        cout<<"PowerConsumption: "<<powerConsumption<<endl;
    }

};


class ElectricCar: public Vehicle, public ElectricDevice
{
private:
   string carName;

public:
    ElectricCar()
    {
        carName="0";
    }

    ElectricCar(string brand, string model, int voltage, int powerConsumption, string carName): Vehicle(brand, model), ElectricDevice(voltage, powerConsumption)
    {
        this->carName=carName;
    }

    void displayDetails()
    {
        cout<<"CarName: "<<carName<<endl;
        show1();
        show2();
    }
};


int main()
{
    ElectricCar E("Bulletproof", "B613", 13, 7, "Bangtan");

    E.displayDetails();
}



