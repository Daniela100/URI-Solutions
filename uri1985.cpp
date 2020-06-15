#include <iostream>
#include <cstdio>

using namespace std;

int main(){

    double preco[6] = {0.0, 1.5, 2.5, 3.5, 4.5, 5.5};

    int c;
    double soma = 0.0;
    cin >> c;

    for(int i=0 ; i<c ; i++) {
        int prod, q;

        cin >> prod >> q;

        prod %= 10;

        soma += (preco[prod]*q);
    }

    printf("%.2f\n", soma);

    return 0;
}