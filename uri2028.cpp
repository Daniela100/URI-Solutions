#include <iostream>

using namespace std;

int main(){

    int n, caso = 1;

    while(cin >> n) {
        int soma = 1;

        for(int i=1 ; i<=n ; i++) {
            soma += i;
        }

        cout << "Caso " << caso << ": " << soma << " numero";
        if(soma > 1) cout << "s";
        cout << endl;

        cout << 0;
        for(int i=1 ; i<=n ; i++) {
            for(int j=0 ; j<i ; j++) {
                cout << " " << i;
            }
        }

        cout << "\n\n";
        caso++;
    }

    return 0;
}