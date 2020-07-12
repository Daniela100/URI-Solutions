#include <iostream>
#include<cstdio>
using namespace std;
int main(){
    int cont = 0;
    float idade, soma = 0.0;
    do {
        cin >> idade;
        if(idade > 0) {
            soma += idade;
            cont++;
        }
    } while(idade>0);

    printf("%.2f\n", soma/(1.0*cont));
    return 0;
}