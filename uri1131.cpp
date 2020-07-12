#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main() {

    int novo;
    bool continua = true;
    int inter, gremio;
    int partidas, vi, vg, emp;
    partidas = vi = vg = emp = 0;

    while(continua) {
        partidas++;
        cin >> inter >> gremio;
        if(inter > gremio) vi++;
        else if(inter < gremio) vg++;
        else emp = 0;
        
        do {
            cout << "Novo grenal (1-sim 2-nao)\n";
            cin >> novo;
            if(novo == 2) {
                continua = false;
                cout << partidas << " grenais\n";
                cout << "Inter:" << vi << endl;
                cout << "Gremio:" << vg << endl;
                cout << "Empates:" << emp << endl;
                if(vi > vg) {
                    cout << "Inter venceu mais\n";
                } else if(vi < vg) {
                    cout << "Gremio venceu mais\n";
                } else {
                    cout << "Nao houv vencedor\n";
                }

                break;
            }
        } while(novo != 1);
    }
    return 0;
}