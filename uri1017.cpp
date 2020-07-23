#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double distancia, tempo, vm, gasto;
    
    cin >> tempo >> vm;
    
    distancia = vm * tempo;
    gasto = distancia/12;
    
    cout << fixed << setprecision (3) << gasto << endl;
 
    return 0;
}
