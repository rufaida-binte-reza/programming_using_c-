#include<iostream>
using namespace std;

class Print
{
public:
    void display(int i)
    {
        cout << "Displaying int: " << i << endl;
    }

    void display(double f)
    {
        cout << "Displaying float: " << f << endl;
    }

    void display(int i, int j)
    {
        cout << "Displaying two ints: " << i << " and " << j << endl;
    }
};

int main() {
    Print p;
    p.display(5);          // Calls display(int)
    p.display(3.14159);    // Calls display(double)
    p.display(10, 20);     // Calls display(int, int)
}
