#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;
    double fahrenheit;

    // Helper method to convert Celsius to Fahrenheit
    double celsiusToFahrenheit(double celsius)
    {
        return (celsius * 9 / 5) + 32;
    }

    // Helper method to convert Fahrenheit to Celsius
    double fahrenheitToCelsius(double fahrenheit)
    {
        return (fahrenheit - 32) * 5 / 9;
    }

public:
    // Constructor to initialize temperature in Celsius
    Temperature(double celsius)
    {
        this->celsius = celsius;
        this->fahrenheit = celsiusToFahrenheit(celsius);
    }

    // Constructor to initialize temperature in Fahrenheit
    // This is an example of constructor overloading
    Temperature(bool isFahrenheit, double temperature) {
        if (isFahrenheit) {
            this->fahrenheit = temperature;
            this->celsius = fahrenheitToCelsius(temperature);
        } else {
            this->celsius = temperature;
            this->fahrenheit = celsiusToFahrenheit(temperature);
        }
    }

    // Getter for Celsius
    double getCelsius() const {
        return celsius;
    }

    // Setter for Celsius
    void setCelsius(double celsius) {
        this->celsius = celsius;
        this->fahrenheit = celsiusToFahrenheit(celsius);
    }

    // Getter for Fahrenheit
    double getFahrenheit() const {
        return fahrenheit;
    }

    // Setter for Fahrenheit
    void setFahrenheit(double fahrenheit) {
        this->fahrenheit = fahrenheit;
        this->celsius = fahrenheitToCelsius(fahrenheit);
    }
};

int main() {
    // Create Temperature object with Celsius
    Temperature tempC(25); // 25°C
    cout << "Temperature in Celsius: " << tempC.getCelsius() << "°C" << endl;
    cout << "Temperature in Fahrenheit: " << tempC.getFahrenheit() << "°F" << endl;

    // Create Temperature object with Fahrenheit
    Temperature tempF(true, 77); // 77°F
    cout << "Temperature in Celsius: " << tempF.getCelsius() << "°C" << endl;
    cout << "Temperature in Fahrenheit: " << tempF.getFahrenheit() << "°F" << endl;

    // Change the temperature of tempC to Fahrenheit
    tempC.setFahrenheit(33);
    cout << "After setting tempC to 68°F, Temperature in Celsius: " << tempC.getCelsius() << "°C" << endl;

    return 0;
}
