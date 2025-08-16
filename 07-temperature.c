#include <stdio.h>

double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);
void printFahrenheit(double fahrenheit);
void printCelcius(double celsius);

int main() {
    double tem;
    char cof;
    scanf("%lf %c", &tem, &cof);

    if (cof == 'c' || cof == 'C') {
        printFahrenheit(tem);
    }

    if (cof == 'f' || cof == 'F') {
        printCelcius(tem);
    }
    return 0;
}

void printFahrenheit(double fahrenheit) {
    printf("%.2lf f", celsiusToFahrenheit(fahrenheit));
}

void printCelcius(double celsius) {
    printf("%.2lf c", fahrenheitToCelsius(celsius));
}

double celsiusToFahrenheit(double celsius) {
    return ((180.0/100.0) * celsius) + 32 ;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (100.0/180.0) * (fahrenheit - 32);
}