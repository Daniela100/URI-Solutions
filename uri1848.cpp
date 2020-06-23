#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int interpretador(const string &linha) {
    int resul = 0;
    for(int i=0, j=linha.size() - 1 ; i<linha.size() ; i++, j--) {
        if(linha[i] == '*') 
            resul += pow(2, j);
    }

    return resul;
}

int main() {
    
    string linha;
    int soma = 0;
    bool grito = false;
    int cont = 0;

    while(true) {
        getline(cin, linha);
        if(linha == "caw caw") {
            cout << soma << endl;
            soma = 0;
            cont++;
        } else {
            int num = interpretador(linha);
            soma += num;
        }

        if(cont == 3) {
            break;
        }
    }
    

    return 0;
}