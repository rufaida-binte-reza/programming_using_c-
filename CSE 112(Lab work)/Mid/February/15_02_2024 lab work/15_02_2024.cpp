#include<iostream>
using namespace std;

class Product
{
    private:
    string name;
    int price, quantity;

    public:
    Product()
    {
       name="0";
       price=0;
       quantity=0;
    }

    Product(string n, int p, int q)
    {
       name=n;
       price=p;
       quantity=q;
    }

    void get_data()
    {
       cout<<"Name:"<<name<<" Price:"<<price<<" Quantity:"<<quantity<<endl;
    }

    void sum(Product obj1, Product obj2)
    {
        cout<<"Total cost: "<<obj1.price*obj1.quantity+obj2.price*obj2.quantity<<endl;
    }

};

int main()
{
    Product P1("Pencil", 15, 5);
    Product P2("Canvas", 500, 10);
    P1.get_data();
    P2.get_data();

    Product P3;
    P3.sum(P1,P2);

}
