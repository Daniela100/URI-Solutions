#include <iostream>

using namespace std;

int main() {

    int s, t, f;

    cin >> s >> t >> f;

    int hora = s + t + f;

    if(hora >= 24) hora -= 24;
    if(hora < 0) hora = 24 + hora;

    cout << hora << endl;

    return 0;
}