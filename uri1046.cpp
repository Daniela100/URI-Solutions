#include <iostream>
using namespace std;

int main(){

    int h1, h2;

    cin >> h1 >> h2;
    cout << "O JOGO DUROU ";
    if(h1 == h2) cout << "24 HORA(S)\n";
    else{
        if((h1>12 && h2>12) || (h1<=12 && h2 <=12)){
            if(h1<h2) cout << h2-h1;
            else cout << h1-h2;           
        }

        else if(h1>12){
            cout << (24-h1) + h2;
        }

        else if(h2>12){
            cout << h2-h1;
        }

        cout << " HORA(S)\n";
    }

    return 0;
}