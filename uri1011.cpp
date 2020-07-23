#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
    double r, vol;
    
    cin >> r;
    
    vol = (4.0/3)*3.14159*pow(r,3);
    
    cout << "VOLUME = " << fixed << setprecision (3) << vol << endl;
    
    return 0;
}