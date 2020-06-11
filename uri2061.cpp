#include <iostream>

using namespace std;

int main() {

    int n, m;

    cin >> n >> m;

    // a cada aba fechada, duas são abertas
    // quando clica na propaganda, aba encerrada sem abrir outras

    string acao;

    for(int i=0 ; i<m ; i++) {
        cin >> acao;

        if(acao == "fechou") n++;
        else if(acao == "clicou") n--; 
    }

    cout << n << endl;
    
    return 0;
}