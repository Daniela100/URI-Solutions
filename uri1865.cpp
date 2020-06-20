#include <iostream>
#include <string>

using namespace std;

void tolower(string &nome) {
    for(int i=0 ; i<nome.size() ; i++) {
        if(nome[i] >= 'A' && nome[i] <= 'Z') {
            nome[i] = nome[i] + 32;
        }
    }
}

int main() {
    
    string nome;
    int forca, c;

    cin >> c;

    for(int i=0 ; i<c ; i++) {
        cin >> nome >> forca;
        tolower(nome);
        if(nome == "thor") cout << "Y";
        else cout << "N";

        cout << endl;
    }

    return 0;
}