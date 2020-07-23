#include<iostream>

using namespace std;

int main() {
    int hi, hf, mi, mf;
    cin >> hi >> mi >> hf >> mf;
    int hs, ms;

    int mti = mi + 60*hi;
    int mtf = mf + 60*hf;
    int aux;
    // 1 hora --- 60 min
    // x hora --- y min
    // x = y/60

    if(mti == mtf) {
        ms = 0;
        hs = 24;
    } else {
        if(mti > mtf) {
            aux = mtf+(24*60) - mti;
        } else {
            aux = mtf-mti;
        }

        hs = aux/60;
        ms = aux%60;
    }

    // cout << mti << " " << mtf << endl;
    cout << "O JOGO DUROU " << hs << " HORA(S) E " << ms << " MINUTO(S)\n";

    return 0;
}