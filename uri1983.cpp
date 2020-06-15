#include <iostream>

using namespace std;

int main(){

    int n, matricula, selecionado = -1;
    cin >> n;
    double nota, max = 8.0;

    for(int i=0 ; i<n ; i++) {
        cin >> matricula >> nota;
        if(nota >= max) {
            max = nota;
            selecionado = matricula;
        }
    }

    if(selecionado != -1) {
        cout << selecionado << endl;
    } else {
        cout << "Minimum note not reached\n";
    }
    
    return 0;
}