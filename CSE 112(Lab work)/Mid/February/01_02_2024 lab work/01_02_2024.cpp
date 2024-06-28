#include<iostream>
using namespace std;

class Square
{
private:
    int lenght;

public:
    void set_lenght(int l)
    {
        lenght=l;
    }

    void get_lenght()
    {
        cout<<lenght<<endl;
    }
    friend Square area(Square& obj);

};

   Square area(Square& obj)
   {
       Square temp;
       temp.lenght=obj.lenght*obj.lenght;
       return temp;
   }

int main()
{
    Square s1,s2;
    s1.set_lenght(4);
    s2=area(s1);

    s2.get_lenght();


}

