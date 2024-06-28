#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double img;

public:
    // Parameterized constructor
    Complex(double r, double i) : real(r), img(i) {}

    // Friend functions
    friend Complex add(const Complex& c1, const Complex& c2);
    friend Complex multiply(const Complex& c1, const Complex& c2);

    // Function to display the complex number
    void display() const {
        cout << real << " + " << img << "i" << endl;
    }
};

// Friend function to add two complex numbers
Complex add(const Complex& c1, const Complex& c2) {
    Complex temp(0, 0);
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

// Friend function to multiply two complex numbers
Complex multiply(const Complex& c1, const Complex& c2) {
    Complex temp(0, 0);
    temp.real = (c1.real * c2.real) - (c1.img * c2.img);
    temp.img = (c1.real * c2.img) + (c1.img * c2.real);
    return temp;
}

int main() {
    Complex c1(3, 2);
    Complex c2(1, 7);

    Complex c3 = add(c1, c2);
    Complex c4 = multiply(c1, c2);

    cout << "Addition of c1 and c2: ";
    c3.display();

    cout << "Multiplication of c1 and c2: ";
    c4.display();

    return 0;
}
