#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int contaDigitos(int tam) {
    int valor = pow(2, tam+tam);

    int num_d = 0;
    if(valor == 0) return 1;
    else {
        while(valor > 0) {
            valor /= 10;
            num_d++;
        }
    }

    return num_d;
}

int main() {

    int n;
    cout.precision(10);
    while(cin >> n && n != 0) {

        int espacos = contaDigitos(n-1);

        for(int i=0 ; i<n ; i++) {
            for(int j=0 ; j<n ; j++) {
                if(j == 0) {
                    cout << setw(espacos) << pow(2, i+j);
                } else {
                    cout << " " << setw(espacos) << pow(2, j+i);
                }
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}