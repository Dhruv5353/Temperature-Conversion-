#include <iostream>

using namespace std;

class TemperatureConverter {
private:
    double temperature;

public:
    TemperatureConverter(double temp) : temperature(temp) {}

    double toCelsius() const {
        return temperature;
    }

    double toFahrenheit() const {
        return temperature * 9 / 5 + 32;
    }

    double toKelvin() const {
        return temperature + 273.15;
    }

    void setTemperature(double temp) {
        temperature = temp;
    }
};

int main() {
    TemperatureConverter converter(0);
    int choice;
    double temp;

    cout << "Temperature Converter Menu:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Celsius to Kelvin" << endl;
    cout << "3. Fahrenheit to Celsius" << endl;
    cout << "4. Fahrenheit to Kelvin" << endl;
    cout << "5. Kelvin to Celsius" << endl;
    cout << "6. Kelvin to Fahrenheit" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    if (choice < 1 || choice > 6) {
        cout << "Invalid choice! Please enter a number between 1 and 6." << endl;
        return 1; // Return with error code
    }

    cout << "Enter the temperature: ";
    cin >> temp;

    if (cin.fail()) {
        cout << "Invalid temperature! Please enter a valid number." << endl;
        return 1; // Return with error code
    }

    converter.setTemperature(temp);

    switch (choice) {
        case 1:
            cout << "Celsius to Fahrenheit: " << converter.toFahrenheit() << endl;
            break;
        case 2:
            cout << "Celsius to Kelvin: " << converter.toKelvin() << endl;
            break;
        case 3:
            cout << "Fahrenheit to Celsius: " << converter.toCelsius() << endl;
            break;
        case 4:
            cout << "Fahrenheit to Kelvin: " << converter.toKelvin() << endl;
            break;
        case 5:
            cout << "Kelvin to Celsius: " << converter.toCelsius() << endl;
            break;
        case 6:
            cout << "Kelvin to Fahrenheit: " << converter.toFahrenheit() << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}