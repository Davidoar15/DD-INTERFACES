#include "Conversion.h"

const double ptoCongelamientoEnF = 32.0;
const double proporcionF2C = 5.0/9.0;
const double proporcionC2F = 9.0/5.0;

double Celsius(double fahrenheit) {
    return (fahrenheit - ptoCongelamientoEnF)*proporcionF2C;
}

double Fahrenheit(double celsius) {
    return celsius*proporcionC2F + ptoCongelamientoEnF;
}
