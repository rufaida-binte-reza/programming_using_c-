#include<iostream>
using namespace std;


class Person
{
private:
   string name, age;

public:
    Person()
    {
        name="0";
        age="0";
    }

    Person(string name, string age)
    {
        this->name=name;
        this->age=age;
    }

    void show1()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }

};


class Address
{
private:
   string street, city, zip_code;

public:
    Address()
    {
        street="0";
        city="0";
        zip_code="0";
    }

    Address(string street, string city, string zip_code)
    {
        this->street=street;
        this->city=city;
        this->zip_code=zip_code;
    }

    void show2()
    {
        cout<<"Street: "<<street<<endl;
        cout<<"City: "<<city<<endl;
        cout<<"Zip_code: "<<zip_code<<endl;
    }

};


class Contact: public Person, public Address
{
private:
   string phone_number;

public:
    Contact()
    {
        phone_number="0";
    }

    Contact(string name, string age, string street, string city, string zip_code, string phone_number): Person(name, age), Address(street, city, zip_code)
    {
        this->phone_number=phone_number;
    }

    void display()
    {
        show1();
        show2();
        cout<<"Phone_number: "<<phone_number<<endl;
    }
};


int main()
{
    Contact c("Bangtan", "10", "B613", "Seoul" , "7", "07090613");

    c.display();
}



