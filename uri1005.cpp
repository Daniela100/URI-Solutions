#include <iostream>
#include <iomanip>
#include <cstdio>
 
using namespace std;
 
int main() {
    
    double A, B, MEDIA;
    
    cin >> A;
    cin >> B;
    
    MEDIA = ((3.5*A)+(7.5*B))/11;
    
    cout << "MEDIA = " << fixed << setprecision (5) << MEDIA << endl;
    
    return 0;
}