#include <iostream>

using namespace std;

int main() {

    int hora, min;
    char c;

    while(cin >> hora >> c >> min) {
        
        min = hora*60 + min + 60;

        int atraso = min - 480;
        if(atraso < 0) atraso = 0;

        cout << "Atraso maximo: " << atraso << endl;

    }

    return 0;
}