#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main() {

    vector<double> nota(2);
    int novo;
    bool continua = true;

    while(continua) {
        int valida = 0;
        while(valida < 2) {
            double x;
            cin >> x;
            if(x >= 0 && x <= 10) {
                nota[valida] = x;
                valida++;
            } else {
                cout << "nota invalida\n";
            }

            if(valida == 2) 
                printf("media = %.2lf\n", (nota[0]+nota[1])/2);
        }
        
        do {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> novo;
            if(novo == 2) {
                continua = false;
                break;
            }
        } while(novo != 1);
    }
    return 0;
}