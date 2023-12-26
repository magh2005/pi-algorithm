#include <iostream>
#include <cmath>

// ! Mohasebeye Meghdare Pi Ba Estefade Az Algorithm Srinivasa Ramanujan ( https://en.wikipedia.org/wiki/Ramanujan%E2%80%93Sato_series ).

using namespace std;

double factorial(int len) {//calculate factorial
    double result = 1;
    for (int i = 1; i <= len; i++) {
        result *= i;
    }
    return result;
}

//calculate the series sum
double SeriesCalculate(int accuracy) { // @param accuracy: Deghate Mohasebe
    double sum = 0;
    for (int i = 0; i <= accuracy; i++) {
        double cyc = factorial(4 * i) * (1103 + 26390 * i);
        cyc /= pow(factorial(i), 4) * pow(396, 4 * i);
        sum += cyc;
    }
    return sum;
}

int main() {
    int accuracy = 1; // Deghate Mohasebe
    double series = SeriesCalculate(accuracy);
    double pi = 1 / (series * (2 * sqrt(2)) / 9801);
    cout << pi << endl;

    return 0;
}
