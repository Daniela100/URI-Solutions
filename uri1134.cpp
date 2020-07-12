#include<iostream>
#include<vector>
using namespace std;

int main() {

    // 1.Álcool 2.Gasolina 3.Diesel 4.Fim
    vector<int> comb(3, 0);
    int tipo;

    do {
        cin >> tipo;
        if(tipo >= 1 && tipo <= 3) {
            comb[tipo-1]++;
        }
        if(tipo == 4) {
            cout << "MUITO OBRIGADO\n";
            cout << "Alcool: " << comb[0] << "\nGasolina: " << comb[1];
            cout << "\nDiesel: " << comb[2] << endl;
            break;
        }
    } while(true);

    return 0;
}