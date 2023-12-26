#include <iostream>

using namespace std;

int main(){
    double r = 1; //Result
    int direction = -1;
    for (double i = 3; i <= 999999; i += 2)
    {
        r += direction * (1/i);
        direction *= -1;
    }
    r = 4 * (r); // (pi/4) = r -> pi = (r*4)
    cout << r; //Print Result
    return 0;
}
