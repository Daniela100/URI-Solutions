#include <iostream>

using namespace std;

int main() {
    
    int soma = 0, c, n;

    cin >> c;

    for(int i=0 ; i<c ; i++) {
        cin >> n;
        for(int j=1 ; j<=n ; j++) {
            soma += (j%2==0?(-1):(1));
        }

        cout << soma << endl;
        soma = 0;
    }

    return 0;
}