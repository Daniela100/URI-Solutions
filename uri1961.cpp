#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int p, n;

    cin >> p >> n;

    int ant;
    cin >> ant;
    int prox;

    for(int i=1 ; i<n ; i++) {
        cin >> prox;
        if(abs(prox-ant) > p) {
            cout << "GAME OVER\n";
            return 0;
        }

        ant = prox;
    }

    cout << "YOU WIN\n";
    return 0;
}