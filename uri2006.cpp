#include <iostream>

using namespace std;

int main(){

    char tipo;
    int cont = 0;
    cin >> tipo;

    for(int i=0 ; i<5 ; i++) {
        char resp;
        cin >> resp;
        if(resp == tipo) cont++;
    }

    cout << cont << endl;

    return 0;
}