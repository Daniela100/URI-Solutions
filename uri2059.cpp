#include <iostream>

using namespace std;

int main() {

    int j1, j2;
    bool p, r, a;
    int venceu;

    cin >> p >> j1 >> j2 >> r >> a;
    if(r && a) venceu = 2;
    if(r && !a) venceu = 1;
    if(!r && a) venceu = 1;
    if(!r && !a) {
        if((j1+j2)%2 == 0) {
            if(p) venceu = 1;
            else venceu = 2;
        } else {
            if(!p) venceu = 1;
            else venceu = 2;
        }
    }

    cout << "Jogador " << venceu << " ganha!\n";

    return 0;
}