#include <iostream>
#include <string>
using namespace std;

int main() {

    string texto;

    getline(cin, texto);

    if(texto.size() <= 80) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}