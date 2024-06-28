/*1.Create an Employee class with attributes like name, contact
and salary.Create an array of objects of the employee class to
store N employee details and display the details of an
employee with the highest salary.*/


#include<iostream>
using namespace std;

class Employee
{
private:
    string name;
    double contact, salary;

public:
    void display()
    {
       cout<<"Name: "<<name<<endl<<"Contact: "<<contact<<endl<<"Salary: "<<salary<<endl;
    }

    void Salary_compare()
    {

    }
};
