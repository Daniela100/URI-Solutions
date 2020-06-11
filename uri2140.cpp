#include <iostream>

using namespace std;

int main() {

    int n, m, troco;
    int notas[6] = {100, 50, 20, 10, 5, 2};

    while(cin >> n >> m) {
        if(n == 0 && m == 0) {
            break;
        }

        troco = m - n;

        int q_notas = 0;

        for(int i=0 ; i<6 ; i++) {
            q_notas += troco/notas[i];
            troco %= notas[i];
        }

        if(troco == 0) {
            if(q_notas == 2) {
                cout << "possible\n";
            } else {
                cout << "impossible\n";
            }
        } else {
            cout << "impossible\n";
        }
    }
    
    return 0;
}