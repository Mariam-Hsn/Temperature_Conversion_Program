#include <iostream>
#include <math.h>
using namespace std;

double Celsius_To_Fahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double Fahrenheit_To_Celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double Celsius_To_Kelvin(double celsius) {
    return celsius + 273.15;
}

double Kelvin_To_Celsius(double kelvin) {
    return kelvin - 273.15;
}

double Fahrenheit_To_Kelvin(double fahrenheit) {
    double celsius = Fahrenheit_To_Celsius(fahrenheit);
    return Celsius_To_Kelvin(celsius);
}

double Kelvin_To_Fahrenheit(double kelvin) {
    double celsius = Kelvin_To_Celsius(kelvin);
    return Celsius_To_Fahrenheit(celsius);
}

int main() {
    int choice;
    double temperature, celsius, fahrenheit, kelvin;

    while (true) {
        cout << "                   *** Temperature Conversion ***                  " << endl;
        cout << "-------------------------------------------------------------------" << endl;
        cout << "1. Celsius to Fahrenheit and Kelvin" << endl;
        cout << "2. Fahrenheit to Celsius and Kelvin" << endl;
        cout << "3. Kelvin to Celsius and Fahrenheit" << endl;
        cout << "4. Quit" << endl;
        cout << "Select conversion type (1/2/3/4): ";

        cin >> choice;

        if (choice == 4) {
            break;
        }

        cout << "Enter temperature value: ";
        cin >> temperature;

        switch (choice)
        {
        case 1:
            celsius = temperature;
            fahrenheit = Celsius_To_Fahrenheit(celsius);
            kelvin = Celsius_To_Kelvin(celsius);
            cout << temperature << " Celsius is equal to " << fahrenheit << " Fahrenheit and " << kelvin << " Kelvin" << endl;
            break;
        case 2:
            fahrenheit = temperature;
            celsius = Fahrenheit_To_Celsius(fahrenheit);
            kelvin = Fahrenheit_To_Kelvin(fahrenheit);
            cout << temperature << " Fahrenheit is equal to " << celsius << " Celsius and " << kelvin << " Kelvin" << endl;
            break;
        case 3:
            kelvin = temperature;
            celsius = Kelvin_To_Celsius(kelvin);
            fahrenheit = Kelvin_To_Fahrenheit(kelvin);
            cout << temperature << " Kelvin is equal to " << celsius << " Celsius and " << fahrenheit << " Fahrenheit" << endl;
            break;
        default:
            cout << "Invalid choice. Please select a valid option." << endl;
            break;
        }
    }
    return 0;
}
