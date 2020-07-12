#include<iostream>
using namespace std;

int main() {
    int x, z;

    cin >> x;
    cin >> z;
    while(z <= x) {
        cin >> z;
    }

    int soma = 0;
    int cont = 0;
    for(int i=x ; soma <= z; x++) {
        soma += x;
        cont++;
    }

    cout << cont << endl;
    
    return 0;
}