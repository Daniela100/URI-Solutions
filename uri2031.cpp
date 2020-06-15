#include <iostream>
#include <string>

using namespace std;

int main() {

    int casos;
    cin >> casos;
    string j1, j2;

    for(int i=0 ; i<casos ; i++) {
        cin >> j1 >> j2;

        if(j1 == j2) {
            if(j1 == "papel")       cout << "Ambos venceram";
            else if(j1 == "pedra")  cout << "Sem ganhador";
            else if(j1 == "ataque") cout << "Aniquilacao mutua";
        } else {
            if(j1 == "ataque") cout << "Jogador 1 venceu";
            else if(j2 == "ataque") cout << "Jogador 2 venceu";
            else if(j1 == "pedra" && j2 == "papel") cout << "Jogador 1 venceu";
            else if(j2 == "pedra" && j1 == "papel") cout << "Jogador 2 venceu";
        }

        cout << endl;
    }

    return 0;
}