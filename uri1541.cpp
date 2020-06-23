#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // medidas da casa
    int a, b;
    // percentual máximo liberado
    int c;

    cin >> a;

    while(a != 0) {
        cin >> b >> c;
        int terreno = (100*a*b)/c;
        cout << (int)sqrt(terreno) << endl;
        cin >> a;
    }

    return 0;
}