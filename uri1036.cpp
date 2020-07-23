#include <iostream>
#include <cmath>
#include <cstdio>
 
using namespace std;
 
int main() {

   double a, b, c, delta, r1, r2;
   
   cin >> a >> b >> c;
   
   delta = pow(b,2) - 4*a*c;
   r1 = (-(b) + sqrt(delta))/(2*a);
   r2 = (-(b) - sqrt(delta))/(2*a);
   
   if (delta >= 0 && a > 0){
       printf ("R1 = %.5lf\n", r1);
       printf ("R2 = %.5lf\n", r2);
   }
   else
      cout << "Impossivel calcular\n";
       
    return 0;
}