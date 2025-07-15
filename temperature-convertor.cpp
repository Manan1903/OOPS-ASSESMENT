// Temperature Converter using OOP in C++
#include <iostream>
using namespace std;

class TemperatureConverter {
private:
    float celsius;

public:
    void inputCelsius() {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }

    float convertToFahrenheit() {
        return (celsius * 9 / 5) + 32;
    }

    float convertToKelvin() {
        return celsius + 273.15;
    }
};

int main() {
    TemperatureConverter temp;
    temp.inputCelsius();

    cout << "Temperature in Fahrenheit: " << temp.convertToFahrenheit() << endl;
    cout << "Temperature in Kelvin: " << temp.convertToKelvin() << endl;

    return 0;
}
