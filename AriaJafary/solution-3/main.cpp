#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    //This code uses the tangent graph to calculate π
     int m = 0;
     long double  pi = 0 ;
     for(long double eps = 1 ;  tan(pi/2) < 1000000 ; eps = eps + pow(.1,m))
     {
         if( tan(pi/2) >   tan((pi+eps)/2) )
         {
             m = m + 1 ;
             eps = pow(.1,m);
             continue;
         }
         pi = pi + eps ;
     }
     cout << setprecision(20) <<pi << endl ;

}

