#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //leibniz formula for π is used in this code
    int n , m = 1;
    long double pi = 0;
    cin >> n ;
    for ( float i = 1 ; m <= n ; i=i+2)
    {
        long double temp = (long double)1/(long double)i ;
        cout << "\t\ttemp = " << temp << endl ;
        if(m%2==1)
        {
        pi = pi + temp;
        m++;
        continue;
        cout << " \tpi = " << setprecision(20)<<pi << endl;
        }
        if( m%2 == 0)
        {
        pi = pi - temp;
        m++;
        cout << " \tpi = " << setprecision(20)<< 4*pi << endl;
        }

    }
cout << setprecision(20)<<4*pi  ;
}
