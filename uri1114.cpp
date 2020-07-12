#include<iostream>
#include<string>
using namespace std;

int main() {

    string senha = "2002";

    while(true) {
        string entrada;
        cin >> entrada;
        if(entrada == senha) {
            cout << "Acesso Permitido\n";
            break;
        } else {
            cout << "Senha Invalida\n";
        }
    }
    
    return 0;
}