#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double pi = 0; float tmp = 1;
    for(float i = 1 ; i < 10000000 ; i += 4)
    {
        tmp = 1 / i;
        pi += tmp;
    }

    for(float i = 3 ; i < 10000000 ; i += 4)
    {
        tmp = 1 / i;
        pi += -tmp;
    }

    pi = pi *4;
    cout << pi << endl;
}
