#include<iostream>
using namespace std;

class Person
{
private:
    string name, age;

public:
    void set_data(string n, string a)
    {
        name=n;
        age=a;
    }

    void get_data()
    {
        cout<<name<<" "<<age<<endl;
    }
};

int main()
{
    Person arr[4];
    Person*p;
    string n,a;

    p= arr;

    for(int i=0; i<4; i++)
    {
        cin>>n>>a;
        p-> set_data(n,a);
        p++;
    }

    p= arr;
    for(int i=0; i<4; i++)
    {
        p->get_data();
        p++;
    }

}
