#include<iostream>
using namespace std;

class Person
{
  private :
    string name;
    int age;

  public:
    void set_n_a(string n, int a)
    {
        name = n;
        age = a;
    }

    void get_n_a()
    {
        cout<<name<<" "<<age<<endl;
    }
};

int main()
{
    Person p1;

    p1.set_n_a("Rufaida",22);
    p1.get_n_a();


}
